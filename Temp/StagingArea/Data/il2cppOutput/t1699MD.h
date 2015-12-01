#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t1699;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m10312_gshared (t1699 * __this, const MethodInfo* method);
#define m10312(__this, method) (( void (*) (t1699 *, const MethodInfo*))m10312_gshared)(__this, method)
extern "C" void m10313_gshared (t2 * __this , const MethodInfo* method);
#define m10313(__this , method) (( void (*) (t2 * , const MethodInfo*))m10313_gshared)(__this , method)
extern "C" int32_t m10314_gshared (t1699 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m10314(__this, p0, p1, method) (( int32_t (*) (t1699 *, t2 *, t2 *, const MethodInfo*))m10314_gshared)(__this, p0, p1, method)
extern "C" t1699 * m10315_gshared (t2 * __this , const MethodInfo* method);
#define m10315(__this , method) (( t1699 * (*) (t2 * , const MethodInfo*))m10315_gshared)(__this , method)
