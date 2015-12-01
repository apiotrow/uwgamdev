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

struct t2172;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16139_gshared (t2172 * __this, const MethodInfo* method);
#define m16139(__this, method) (( void (*) (t2172 *, const MethodInfo*))m16139_gshared)(__this, method)
extern "C" int32_t m16140_gshared (t2172 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m16140(__this, p0, p1, method) (( int32_t (*) (t2172 *, t2 *, t2 *, const MethodInfo*))m16140_gshared)(__this, p0, p1, method)
