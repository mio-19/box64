/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.2.0.17) *
 *******************************************************************/
#ifndef __wrappedlibglxTYPES_H_
#define __wrappedlibglxTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void* (*pFp_t)(void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(glXGetProcAddress, pFp_t) \
	GO(glXGetProcAddressARB, pFp_t)

#endif // __wrappedlibglxTYPES_H_
