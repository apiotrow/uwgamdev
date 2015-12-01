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

struct t555;
struct t22;
struct t22_marshaled;
struct t532;
struct t306;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2870_gshared (t555 * __this, t22 * p0, t532 * p1, bool p2, const MethodInfo* method);
#define m2870(__this, p0, p1, p2, method) (( void (*) (t555 *, t22 *, t532 *, bool, const MethodInfo*))m2870_gshared)(__this, p0, p1, p2, method)
extern "C" void m15460_gshared (t555 * __this, t306* p0, const MethodInfo* method);
#define m15460(__this, p0, method) (( void (*) (t555 *, t306*, const MethodInfo*))m15460_gshared)(__this, p0, method)
