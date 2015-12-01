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

struct t2232;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16752_gshared (t2232 * __this, const MethodInfo* method);
#define m16752(__this, method) (( void (*) (t2232 *, const MethodInfo*))m16752_gshared)(__this, method)
extern "C" void m16753_gshared (t2 * __this , const MethodInfo* method);
#define m16753(__this , method) (( void (*) (t2 * , const MethodInfo*))m16753_gshared)(__this , method)
extern "C" int32_t m16754_gshared (t2232 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m16754(__this, p0, p1, method) (( int32_t (*) (t2232 *, t2 *, t2 *, const MethodInfo*))m16754_gshared)(__this, p0, p1, method)
extern "C" t2232 * m16755_gshared (t2 * __this , const MethodInfo* method);
#define m16755(__this , method) (( t2232 * (*) (t2 * , const MethodInfo*))m16755_gshared)(__this , method)
