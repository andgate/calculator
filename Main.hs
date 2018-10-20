{-# LANGUAGE LambdaCase #-}
{-# LANGUAGE OverloadedStrings #-}
module Main where

import Data.Text (Text, pack)
import Text.Megaparsec
import Text.Megaparsec.Char
import Text.Megaparsec.Error
import qualified Text.Megaparsec.Char.Lexer as L
import Control.Monad.Combinators.Expr

data Op
  = OpAdd
  | OpSub
  | OpMul
  | OpDiv
  | OpPow

data Exp
  = EVal Double
  | EOp Op Exp Exp
  | EParen Exp


type Parser = Parsec () Text


sc :: Parser ()
sc = L.space space1 empty empty

parensP :: Parser a -> Parser a
parensP = between (L.symbol sc "(") (L.symbol sc ")")

integerP :: Parser Integer
integerP = L.signed sc L.decimal

doubleP :: Parser Double
doubleP = L.signed sc L.float

expP :: Parser Exp
expP = makeExprParser termP table <?> "expression"

termP :: Parser Exp
termP = ( EVal   <$> (   try doubleP
                     <|> (fromInteger <$> integerP)
                     )
        )
    <|> ( EParen <$> parensP expP )

table = [ [ binary  "^"  (EOp OpPow) ]
        , [ binary  "*"  (EOp OpMul), binary  "/"  (EOp OpDiv)  ]
        , [ binary  "+"  (EOp OpAdd), binary  "-"  (EOp OpSub)  ] ]

binary  name f = InfixL  (f <$ L.symbol sc name)


simplify :: Exp -> Double
simplify = \case
  EVal x     -> x

  EOp op a b ->
    let a' = simplify a
        b' = simplify b
    in
      case op of
        OpAdd -> a' + b'
        OpSub -> a' - b'
        OpMul -> a' * b'
        OpDiv -> a' / b'
        OpPow -> a' ** b'
  EParen e -> simplify e


eval :: String -> Double
eval input =
  case parse expP "" (pack input) of
    Left  _ -> error "parse failed"
    Right e -> simplify e


main :: IO ()
main = do
  input <- getLine
  let output = eval input
  print output
