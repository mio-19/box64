/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v1.3.0.11) *
 *******************************************************************/
#ifndef __wrappedlibrtTYPES_H_
#define __wrappedlibrtTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int64_t (*iFupp_t)(uint64_t, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(timer_create, iFupp_t)

#endif // __wrappedlibrtTYPES_H_