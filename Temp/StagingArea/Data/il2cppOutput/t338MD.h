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

struct t338;
struct t2;
struct t163;
struct t164;

#include "codegen/il2cpp-codegen.h"
#include "t18.h"

extern "C" void m1660_gshared (t338 * __this, t2 * p0, t18 p1, const MethodInfo* method);
#define m1660(__this, p0, p1, method) (( void (*) (t338 *, t2 *, t18, const MethodInfo*))m1660_gshared)(__this, p0, p1, method)
extern "C" void m12249_gshared (t338 * __this, bool p0, const MethodInfo* method);
#define m12249(__this, p0, method) (( void (*) (t338 *, bool, const MethodInfo*))m12249_gshared)(__this, p0, method)
extern "C" t2 * m12250_gshared (t338 * __this, bool p0, t164 * p1, t2 * p2, const MethodInfo* method);
#define m12250(__this, p0, p1, p2, method) (( t2 * (*) (t338 *, bool, t164 *, t2 *, const MethodInfo*))m12250_gshared)(__this, p0, p1, p2, method)
extern "C" void m12251_gshared (t338 * __this, t2 * p0, const MethodInfo* method);
#define m12251(__this, p0, method) (( void (*) (t338 *, t2 *, const MethodInfo*))m12251_gshared)(__this, p0, method)
