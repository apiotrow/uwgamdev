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

struct t1990;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14255_gshared (t1990 * __this, const MethodInfo* method);
#define m14255(__this, method) (( void (*) (t1990 *, const MethodInfo*))m14255_gshared)(__this, method)
extern "C" int32_t m14256_gshared (t1990 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m14256(__this, p0, p1, method) (( int32_t (*) (t1990 *, int32_t, int32_t, const MethodInfo*))m14256_gshared)(__this, p0, p1, method)
