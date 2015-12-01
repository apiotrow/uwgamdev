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

struct t552;
struct t22;
struct t22_marshaled;
struct t532;
struct t306;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2867_gshared (t552 * __this, t22 * p0, t532 * p1, float p2, const MethodInfo* method);
#define m2867(__this, p0, p1, p2, method) (( void (*) (t552 *, t22 *, t532 *, float, const MethodInfo*))m2867_gshared)(__this, p0, p1, p2, method)
extern "C" void m15453_gshared (t552 * __this, t306* p0, const MethodInfo* method);
#define m15453(__this, p0, method) (( void (*) (t552 *, t306*, const MethodInfo*))m15453_gshared)(__this, p0, method)
