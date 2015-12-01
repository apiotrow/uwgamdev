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

struct t2154;

#include "codegen/il2cpp-codegen.h"
#include "t406.h"

extern "C" void m15750_gshared (t2154 * __this, const MethodInfo* method);
#define m15750(__this, method) (( void (*) (t2154 *, const MethodInfo*))m15750_gshared)(__this, method)
extern "C" int32_t m15751_gshared (t2154 * __this, t406  p0, t406  p1, const MethodInfo* method);
#define m15751(__this, p0, p1, method) (( int32_t (*) (t2154 *, t406 , t406 , const MethodInfo*))m15751_gshared)(__this, p0, p1, method)
