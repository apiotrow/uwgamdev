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

struct t2115;
struct t532;
struct t10;
struct t2;
struct t508;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15647_gshared (t2115 * __this, const MethodInfo* method);
#define m15647(__this, method) (( void (*) (t2115 *, const MethodInfo*))m15647_gshared)(__this, method)
extern "C" t532 * m15648_gshared (t2115 * __this, t10* p0, t2 * p1, const MethodInfo* method);
#define m15648(__this, p0, p1, method) (( t532 * (*) (t2115 *, t10*, t2 *, const MethodInfo*))m15648_gshared)(__this, p0, p1, method)
extern "C" t508 * m15649_gshared (t2115 * __this, t2 * p0, t532 * p1, const MethodInfo* method);
#define m15649(__this, p0, p1, method) (( t508 * (*) (t2115 *, t2 *, t532 *, const MethodInfo*))m15649_gshared)(__this, p0, p1, method)
