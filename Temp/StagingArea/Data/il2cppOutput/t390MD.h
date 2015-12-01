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

struct t256;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14728_gshared (t2 * __this , const MethodInfo* method);
#define m14728(__this , method) (( void (*) (t2 * , const MethodInfo*))m14728_gshared)(__this , method)
extern "C" t256 * m2044_gshared (t2 * __this , const MethodInfo* method);
#define m2044(__this , method) (( t256 * (*) (t2 * , const MethodInfo*))m2044_gshared)(__this , method)
extern "C" void m2069_gshared (t2 * __this , t256 * p0, const MethodInfo* method);
#define m2069(__this , p0, method) (( void (*) (t2 * , t256 *, const MethodInfo*))m2069_gshared)(__this , p0, method)
extern "C" void m14729_gshared (t2 * __this , t256 * p0, const MethodInfo* method);
#define m14729(__this , p0, method) (( void (*) (t2 * , t256 *, const MethodInfo*))m14729_gshared)(__this , p0, method)
