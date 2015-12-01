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

struct t2353;

#include "codegen/il2cpp-codegen.h"
#include "t1603.h"

extern "C" void m17853_gshared (t2353 * __this, const MethodInfo* method);
#define m17853(__this, method) (( void (*) (t2353 *, const MethodInfo*))m17853_gshared)(__this, method)
extern "C" int32_t m17854_gshared (t2353 * __this, t1603  p0, t1603  p1, const MethodInfo* method);
#define m17854(__this, p0, p1, method) (( int32_t (*) (t2353 *, t1603 , t1603 , const MethodInfo*))m17854_gshared)(__this, p0, p1, method)
