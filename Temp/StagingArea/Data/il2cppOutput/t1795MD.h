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

struct t1795;
struct t2;
struct t163;
struct t164;

#include "codegen/il2cpp-codegen.h"
#include "t18.h"
#include "t1786.h"

extern "C" void m11502_gshared (t1795 * __this, t2 * p0, t18 p1, const MethodInfo* method);
#define m11502(__this, p0, p1, method) (( void (*) (t1795 *, t2 *, t18, const MethodInfo*))m11502_gshared)(__this, p0, p1, method)
extern "C" t1786  m11503_gshared (t1795 * __this, int32_t p0, t2 * p1, const MethodInfo* method);
#define m11503(__this, p0, p1, method) (( t1786  (*) (t1795 *, int32_t, t2 *, const MethodInfo*))m11503_gshared)(__this, p0, p1, method)
extern "C" t2 * m11504_gshared (t1795 * __this, int32_t p0, t2 * p1, t164 * p2, t2 * p3, const MethodInfo* method);
#define m11504(__this, p0, p1, p2, p3, method) (( t2 * (*) (t1795 *, int32_t, t2 *, t164 *, t2 *, const MethodInfo*))m11504_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1786  m11505_gshared (t1795 * __this, t2 * p0, const MethodInfo* method);
#define m11505(__this, p0, method) (( t1786  (*) (t1795 *, t2 *, const MethodInfo*))m11505_gshared)(__this, p0, method)
