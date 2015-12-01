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

struct t1805;
struct t21;
struct t227;
struct t228;

#include "codegen/il2cpp-codegen.h"
#include "t69.h"
#include "t1797.h"
#include "t37.h"

extern "C" void m11120_gshared (t1805 * __this, t21 * p0, t69 p1, const MethodInfo* method);
#define m11120(__this, p0, p1, method) (( void (*) (t1805 *, t21 *, t69, const MethodInfo*))m11120_gshared)(__this, p0, p1, method)
extern "C" t1797  m11121_gshared (t1805 * __this, t21 * p0, t37  p1, const MethodInfo* method);
#define m11121(__this, p0, p1, method) (( t1797  (*) (t1805 *, t21 *, t37 , const MethodInfo*))m11121_gshared)(__this, p0, p1, method)
extern "C" t21 * m11122_gshared (t1805 * __this, t21 * p0, t37  p1, t228 * p2, t21 * p3, const MethodInfo* method);
#define m11122(__this, p0, p1, p2, p3, method) (( t21 * (*) (t1805 *, t21 *, t37 , t228 *, t21 *, const MethodInfo*))m11122_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1797  m11123_gshared (t1805 * __this, t21 * p0, const MethodInfo* method);
#define m11123(__this, p0, method) (( t1797  (*) (t1805 *, t21 *, const MethodInfo*))m11123_gshared)(__this, p0, method)
