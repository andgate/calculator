@echo off

cd eval
cabal update
cabal sandbox init
cabal install --dependencies-only
cabal build
cd ..

copy "%cd%\eval\dist\build\eval\eval.dll.a" "%cd%"
copy "%cd%\eval\dist\build\eval\eval.dll" "%cd%"

copy "%cd%\eval\dist\build\eval\eval.dll" "%cd%\release"
copy "%cd%\eval\dist\build\eval\eval.dll" "%cd%\debug"
