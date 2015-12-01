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

struct t2114;
struct t532;
struct t10;
struct t2;
struct t508;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15644_gshared (t2114 * __this, const MethodInfo* method);
#define m15644(__this, method) (( void (*) (t2114 *, const MethodInfo*))m15644_gshared)(__this, method)
extern "C" t532 * m15645_gshared (t2114 * __this, t10* p0, t2 * p1, const MethodInfo* method);
#define m15645(__this, p0, p1, method) (( t532 * (*) (t2114 *, t10*, t2 *, const MethodInfo*))m15645_gshared)(__this, p0, p1, method)
extern "C" t508 * m15646_gshared (t2114 * __this, t2 * p0, t532 * p1, const MethodInfo* method);
#define m15646(__this, p0, p1, method) (( t508 * (*) (t2114 *, t2 *, t532 *, const MethodInfo*))m15646_gshared)(__this, p0, p1, method)
