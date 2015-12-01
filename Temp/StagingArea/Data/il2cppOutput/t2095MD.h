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

struct t2095;
struct t2;
struct t532;
struct t306;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15430_gshared (t2095 * __this, t2 * p0, t532 * p1, const MethodInfo* method);
#define m15430(__this, p0, p1, method) (( void (*) (t2095 *, t2 *, t532 *, const MethodInfo*))m15430_gshared)(__this, p0, p1, method)
extern "C" void m15431_gshared (t2095 * __this, t306* p0, const MethodInfo* method);
#define m15431(__this, p0, method) (( void (*) (t2095 *, t306*, const MethodInfo*))m15431_gshared)(__this, p0, method)
extern "C" bool m15432_gshared (t2095 * __this, t2 * p0, t532 * p1, const MethodInfo* method);
#define m15432(__this, p0, p1, method) (( bool (*) (t2095 *, t2 *, t532 *, const MethodInfo*))m15432_gshared)(__this, p0, p1, method)
