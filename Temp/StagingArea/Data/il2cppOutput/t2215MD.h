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

struct t2215;
struct t2;
struct t163;
struct t164;

#include "codegen/il2cpp-codegen.h"
#include "t18.h"

extern "C" void m16588_gshared (t2215 * __this, t2 * p0, t18 p1, const MethodInfo* method);
#define m16588(__this, p0, p1, method) (( void (*) (t2215 *, t2 *, t18, const MethodInfo*))m16588_gshared)(__this, p0, p1, method)
extern "C" t2 * m16589_gshared (t2215 * __this, const MethodInfo* method);
#define m16589(__this, method) (( t2 * (*) (t2215 *, const MethodInfo*))m16589_gshared)(__this, method)
extern "C" t2 * m16590_gshared (t2215 * __this, t164 * p0, t2 * p1, const MethodInfo* method);
#define m16590(__this, p0, p1, method) (( t2 * (*) (t2215 *, t164 *, t2 *, const MethodInfo*))m16590_gshared)(__this, p0, p1, method)
extern "C" t2 * m16591_gshared (t2215 * __this, t2 * p0, const MethodInfo* method);
#define m16591(__this, p0, method) (( t2 * (*) (t2215 *, t2 *, const MethodInfo*))m16591_gshared)(__this, p0, method)
