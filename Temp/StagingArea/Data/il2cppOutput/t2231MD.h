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

struct t2231;
struct t595;
struct t31;
struct t21;
struct t571;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16728_gshared (t2231 * __this, const MethodInfo* method);
#define m16728(__this, method) (( void (*) (t2231 *, const MethodInfo*))m16728_gshared)(__this, method)
extern "C" t595 * m16729_gshared (t2231 * __this, t31* p0, t21 * p1, const MethodInfo* method);
#define m16729(__this, p0, p1, method) (( t595 * (*) (t2231 *, t31*, t21 *, const MethodInfo*))m16729_gshared)(__this, p0, p1, method)
extern "C" t571 * m16730_gshared (t2231 * __this, t21 * p0, t595 * p1, const MethodInfo* method);
#define m16730(__this, p0, p1, method) (( t571 * (*) (t2231 *, t21 *, t595 *, const MethodInfo*))m16730_gshared)(__this, p0, p1, method)
