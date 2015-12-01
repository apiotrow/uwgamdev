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

struct t2232;
struct t595;
struct t31;
struct t21;
struct t571;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16731_gshared (t2232 * __this, const MethodInfo* method);
#define m16731(__this, method) (( void (*) (t2232 *, const MethodInfo*))m16731_gshared)(__this, method)
extern "C" t595 * m16732_gshared (t2232 * __this, t31* p0, t21 * p1, const MethodInfo* method);
#define m16732(__this, p0, p1, method) (( t595 * (*) (t2232 *, t31*, t21 *, const MethodInfo*))m16732_gshared)(__this, p0, p1, method)
extern "C" t571 * m16733_gshared (t2232 * __this, t21 * p0, t595 * p1, const MethodInfo* method);
#define m16733(__this, p0, p1, method) (( t571 * (*) (t2232 *, t21 *, t595 *, const MethodInfo*))m16733_gshared)(__this, p0, p1, method)
