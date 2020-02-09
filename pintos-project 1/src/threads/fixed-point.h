 
#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#define fp_t int
#define P 17
#define Q 14
#define F 1<<(Q)

#if P + Q != 31
#error "FATAL ERROR: P + Q != 31."
#endif

#define addIntegers(x, n) (x) + (n) * (F)
#define subIntegers(x, n) (x) - (n) * (F)
#define convertToFP(x) (x) * (F)
#define convertToIntZero(x) (x) / (F)
#define convertToNearInt(x) ((x) >= 0 ? ((x) + (F) / 2) / (F) : ((x) - (F) / 2) / (F))
#define FPMul(x, y) ((int64_t)(x)) * (y) / (F)
#define FPDiv(x, y) ((int64_t)(x)) * (F) / (y)


#endif /* threads/fixed-point.h */
