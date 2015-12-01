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

struct t2253;
struct t21;
struct t227;
struct t228;

#include "codegen/il2cpp-codegen.h"
#include "t69.h"
#include "t2246.h"

extern "C" void m16937_gshared (t2253 * __this, t21 * p0, t69 p1, const MethodInfo* method);
#define m16937(__this, p0, p1, method) (( void (*) (t2253 *, t21 *, t69, const MethodInfo*))m16937_gshared)(__this, p0, p1, method)
extern "C" t2246  m16938_gshared (t2253 * __this, t21 * p0, bool p1, const MethodInfo* method);
#define m16938(__this, p0, p1, method) (( t2246  (*) (t2253 *, t21 *, bool, const MethodInfo*))m16938_gshared)(__this, p0, p1, method)
extern "C" t21 * m16939_gshared (t2253 * __this, t21 * p0, bool p1, t228 * p2, t21 * p3, const MethodInfo* method);
#define m16939(__this, p0, p1, p2, p3, method) (( t21 * (*) (t2253 *, t21 *, bool, t228 *, t21 *, const MethodInfo*))m16939_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2246  m16940_gshared (t2253 * __this, t21 * p0, const MethodInfo* method);
#define m16940(__this, p0, method) (( t2246  (*) (t2253 *, t21 *, const MethodInfo*))m16940_gshared)(__this, p0, method)
