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

struct t553;
struct t22;
struct t22_marshaled;
struct t532;
struct t306;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2868_gshared (t553 * __this, t22 * p0, t532 * p1, int32_t p2, const MethodInfo* method);
#define m2868(__this, p0, p1, p2, method) (( void (*) (t553 *, t22 *, t532 *, int32_t, const MethodInfo*))m2868_gshared)(__this, p0, p1, p2, method)
extern "C" void m15454_gshared (t553 * __this, t306* p0, const MethodInfo* method);
#define m15454(__this, p0, method) (( void (*) (t553 *, t306*, const MethodInfo*))m15454_gshared)(__this, p0, method)
