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

struct t180;
struct t1928;
struct t595;
struct t31;
struct t21;
struct t571;

#include "codegen/il2cpp-codegen.h"

extern "C" void m1804_gshared (t180 * __this, const MethodInfo* method);
#define m1804(__this, method) (( void (*) (t180 *, const MethodInfo*))m1804_gshared)(__this, method)
extern "C" void m12789_gshared (t180 * __this, t1928 * p0, const MethodInfo* method);
#define m12789(__this, p0, method) (( void (*) (t180 *, t1928 *, const MethodInfo*))m12789_gshared)(__this, p0, method)
extern "C" void m12790_gshared (t180 * __this, t1928 * p0, const MethodInfo* method);
#define m12790(__this, p0, method) (( void (*) (t180 *, t1928 *, const MethodInfo*))m12790_gshared)(__this, p0, method)
extern "C" t595 * m12791_gshared (t180 * __this, t31* p0, t21 * p1, const MethodInfo* method);
#define m12791(__this, p0, p1, method) (( t595 * (*) (t180 *, t31*, t21 *, const MethodInfo*))m12791_gshared)(__this, p0, p1, method)
extern "C" t571 * m12792_gshared (t180 * __this, t21 * p0, t595 * p1, const MethodInfo* method);
#define m12792(__this, p0, p1, method) (( t571 * (*) (t180 *, t21 *, t595 *, const MethodInfo*))m12792_gshared)(__this, p0, p1, method)
extern "C" t571 * m12793_gshared (t21 * __this , t1928 * p0, const MethodInfo* method);
#define m12793(__this , p0, method) (( t571 * (*) (t21 * , t1928 *, const MethodInfo*))m12793_gshared)(__this , p0, method)
extern "C" void m1809_gshared (t180 * __this, int32_t p0, const MethodInfo* method);
#define m1809(__this, p0, method) (( void (*) (t180 *, int32_t, const MethodInfo*))m1809_gshared)(__this, p0, method)
