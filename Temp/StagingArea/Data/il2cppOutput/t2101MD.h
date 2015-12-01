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

struct t2101;
struct t22;
struct t22_marshaled;
struct t532;
struct t2;
struct t306;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15451_gshared (t2101 * __this, t22 * p0, t532 * p1, t2 * p2, const MethodInfo* method);
#define m15451(__this, p0, p1, p2, method) (( void (*) (t2101 *, t22 *, t532 *, t2 *, const MethodInfo*))m15451_gshared)(__this, p0, p1, p2, method)
extern "C" void m15452_gshared (t2101 * __this, t306* p0, const MethodInfo* method);
#define m15452(__this, p0, method) (( void (*) (t2101 *, t306*, const MethodInfo*))m15452_gshared)(__this, p0, method)
