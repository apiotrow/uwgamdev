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

struct t2230;
struct t595;
struct t31;
struct t21;
struct t571;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16725_gshared (t2230 * __this, const MethodInfo* method);
#define m16725(__this, method) (( void (*) (t2230 *, const MethodInfo*))m16725_gshared)(__this, method)
extern "C" t595 * m16726_gshared (t2230 * __this, t31* p0, t21 * p1, const MethodInfo* method);
#define m16726(__this, p0, p1, method) (( t595 * (*) (t2230 *, t31*, t21 *, const MethodInfo*))m16726_gshared)(__this, p0, p1, method)
extern "C" t571 * m16727_gshared (t2230 * __this, t21 * p0, t595 * p1, const MethodInfo* method);
#define m16727(__this, p0, p1, method) (( t571 * (*) (t2230 *, t21 *, t595 *, const MethodInfo*))m16727_gshared)(__this, p0, p1, method)
