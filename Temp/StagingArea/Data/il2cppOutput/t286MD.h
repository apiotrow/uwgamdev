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

struct t286;
struct t2;
struct t163;
struct t164;

#include "codegen/il2cpp-codegen.h"
#include "t18.h"
#include "t26.h"

extern "C" void m1729_gshared (t286 * __this, t2 * p0, t18 p1, const MethodInfo* method);
#define m1729(__this, p0, p1, method) (( void (*) (t286 *, t2 *, t18, const MethodInfo*))m1729_gshared)(__this, p0, p1, method)
extern "C" void m11672_gshared (t286 * __this, t26  p0, const MethodInfo* method);
#define m11672(__this, p0, method) (( void (*) (t286 *, t26 , const MethodInfo*))m11672_gshared)(__this, p0, method)
extern "C" t2 * m11673_gshared (t286 * __this, t26  p0, t164 * p1, t2 * p2, const MethodInfo* method);
#define m11673(__this, p0, p1, p2, method) (( t2 * (*) (t286 *, t26 , t164 *, t2 *, const MethodInfo*))m11673_gshared)(__this, p0, p1, p2, method)
extern "C" void m11674_gshared (t286 * __this, t2 * p0, const MethodInfo* method);
#define m11674(__this, p0, method) (( void (*) (t286 *, t2 *, const MethodInfo*))m11674_gshared)(__this, p0, method)
