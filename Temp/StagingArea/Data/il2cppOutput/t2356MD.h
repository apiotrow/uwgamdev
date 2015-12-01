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

struct t2356;
struct t21;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17870_gshared (t2356 * __this, const MethodInfo* method);
#define m17870(__this, method) (( void (*) (t2356 *, const MethodInfo*))m17870_gshared)(__this, method)
extern "C" void m17871_gshared (t21 * __this , const MethodInfo* method);
#define m17871(__this , method) (( void (*) (t21 * , const MethodInfo*))m17871_gshared)(__this , method)
extern "C" int32_t m17872_gshared (t2356 * __this, t21 * p0, t21 * p1, const MethodInfo* method);
#define m17872(__this, p0, p1, method) (( int32_t (*) (t2356 *, t21 *, t21 *, const MethodInfo*))m17872_gshared)(__this, p0, p1, method)
extern "C" t2356 * m17873_gshared (t21 * __this , const MethodInfo* method);
#define m17873(__this , method) (( t2356 * (*) (t21 * , const MethodInfo*))m17873_gshared)(__this , method)
