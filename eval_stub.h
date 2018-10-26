#ifndef EVAL_STUB_H
#define EVAL_STUB_H

extern "C" {
    void HsStart(void);
    void HsEnd(void);
    void* eval(void*);
}

#endif // EVAL_STUB_H
