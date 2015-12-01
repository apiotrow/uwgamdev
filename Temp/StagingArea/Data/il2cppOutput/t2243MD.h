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

struct t2243;

#include "codegen/il2cpp-codegen.h"
#include "t1557.h"

extern "C" void m16803_gshared (t2243 * __this, const MethodInfo* method);
#define m16803(__this, method) (( void (*) (t2243 *, const MethodInfo*))m16803_gshared)(__this, method)
extern "C" int32_t m16804_gshared (t2243 * __this, t1557  p0, const MethodInfo* method);
#define m16804(__this, p0, method) (( int32_t (*) (t2243 *, t1557 , const MethodInfo*))m16804_gshared)(__this, p0, method)
extern "C" bool m16805_gshared (t2243 * __this, t1557  p0, t1557  p1, const MethodInfo* method);
#define m16805(__this, p0, p1, method) (( bool (*) (t2243 *, t1557 , t1557 , const MethodInfo*))m16805_gshared)(__this, p0, p1, method)
