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

struct t2113;
struct t532;
struct t10;
struct t2;
struct t508;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15641_gshared (t2113 * __this, const MethodInfo* method);
#define m15641(__this, method) (( void (*) (t2113 *, const MethodInfo*))m15641_gshared)(__this, method)
extern "C" t532 * m15642_gshared (t2113 * __this, t10* p0, t2 * p1, const MethodInfo* method);
#define m15642(__this, p0, p1, method) (( t532 * (*) (t2113 *, t10*, t2 *, const MethodInfo*))m15642_gshared)(__this, p0, p1, method)
extern "C" t508 * m15643_gshared (t2113 * __this, t2 * p0, t532 * p1, const MethodInfo* method);
#define m15643(__this, p0, p1, method) (( t508 * (*) (t2113 *, t2 *, t532 *, const MethodInfo*))m15643_gshared)(__this, p0, p1, method)
