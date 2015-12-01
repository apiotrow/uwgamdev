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

struct t2288;
struct t21;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17219_gshared (t2288 * __this, const MethodInfo* method);
#define m17219(__this, method) (( void (*) (t2288 *, const MethodInfo*))m17219_gshared)(__this, method)
extern "C" int32_t m17220_gshared (t2288 * __this, t21 * p0, t21 * p1, const MethodInfo* method);
#define m17220(__this, p0, p1, method) (( int32_t (*) (t2288 *, t21 *, t21 *, const MethodInfo*))m17220_gshared)(__this, p0, p1, method)
