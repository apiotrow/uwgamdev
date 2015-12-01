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

struct t384;
struct t21;
struct t227;
struct t228;

#include "codegen/il2cpp-codegen.h"
#include "t69.h"

extern "C" void m1831_gshared (t384 * __this, t21 * p0, t69 p1, const MethodInfo* method);
#define m1831(__this, p0, p1, method) (( void (*) (t384 *, t21 *, t69, const MethodInfo*))m1831_gshared)(__this, p0, p1, method)
extern "C" void m13009_gshared (t384 * __this, bool p0, const MethodInfo* method);
#define m13009(__this, p0, method) (( void (*) (t384 *, bool, const MethodInfo*))m13009_gshared)(__this, p0, method)
extern "C" t21 * m13010_gshared (t384 * __this, bool p0, t228 * p1, t21 * p2, const MethodInfo* method);
#define m13010(__this, p0, p1, p2, method) (( t21 * (*) (t384 *, bool, t228 *, t21 *, const MethodInfo*))m13010_gshared)(__this, p0, p1, p2, method)
extern "C" void m13011_gshared (t384 * __this, t21 * p0, const MethodInfo* method);
#define m13011(__this, p0, method) (( void (*) (t384 *, t21 *, const MethodInfo*))m13011_gshared)(__this, p0, method)
