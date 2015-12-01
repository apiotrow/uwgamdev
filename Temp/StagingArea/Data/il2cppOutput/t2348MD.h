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

struct t2348;
struct t21;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17832_gshared (t2348 * __this, const MethodInfo* method);
#define m17832(__this, method) (( void (*) (t2348 *, const MethodInfo*))m17832_gshared)(__this, method)
extern "C" void m17833_gshared (t21 * __this , const MethodInfo* method);
#define m17833(__this , method) (( void (*) (t21 * , const MethodInfo*))m17833_gshared)(__this , method)
extern "C" int32_t m17834_gshared (t2348 * __this, t21 * p0, t21 * p1, const MethodInfo* method);
#define m17834(__this, p0, p1, method) (( int32_t (*) (t2348 *, t21 *, t21 *, const MethodInfo*))m17834_gshared)(__this, p0, p1, method)
extern "C" t2348 * m17835_gshared (t21 * __this , const MethodInfo* method);
#define m17835(__this , method) (( t2348 * (*) (t21 * , const MethodInfo*))m17835_gshared)(__this , method)
