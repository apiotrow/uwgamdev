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

struct t2199;

#include "codegen/il2cpp-codegen.h"
#include "t1221.h"

extern "C" void m16390_gshared (t2199 * __this, const MethodInfo* method);
#define m16390(__this, method) (( void (*) (t2199 *, const MethodInfo*))m16390_gshared)(__this, method)
extern "C" int32_t m16391_gshared (t2199 * __this, t1221  p0, t1221  p1, const MethodInfo* method);
#define m16391(__this, p0, p1, method) (( int32_t (*) (t2199 *, t1221 , t1221 , const MethodInfo*))m16391_gshared)(__this, p0, p1, method)
