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

struct t1821;
struct t2;
struct t163;
struct t164;

#include "codegen/il2cpp-codegen.h"
#include "t18.h"
#include "t1815.h"

extern "C" void m11819_gshared (t1821 * __this, t2 * p0, t18 p1, const MethodInfo* method);
#define m11819(__this, p0, p1, method) (( void (*) (t1821 *, t2 *, t18, const MethodInfo*))m11819_gshared)(__this, p0, p1, method)
extern "C" t1815  m11820_gshared (t1821 * __this, t2 * p0, int32_t p1, const MethodInfo* method);
#define m11820(__this, p0, p1, method) (( t1815  (*) (t1821 *, t2 *, int32_t, const MethodInfo*))m11820_gshared)(__this, p0, p1, method)
extern "C" t2 * m11821_gshared (t1821 * __this, t2 * p0, int32_t p1, t164 * p2, t2 * p3, const MethodInfo* method);
#define m11821(__this, p0, p1, p2, p3, method) (( t2 * (*) (t1821 *, t2 *, int32_t, t164 *, t2 *, const MethodInfo*))m11821_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1815  m11822_gshared (t1821 * __this, t2 * p0, const MethodInfo* method);
#define m11822(__this, p0, method) (( t1815  (*) (t1821 *, t2 *, const MethodInfo*))m11822_gshared)(__this, p0, method)
