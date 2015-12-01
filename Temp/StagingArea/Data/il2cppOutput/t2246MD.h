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

struct t21;
struct t31;

#include "codegen/il2cpp-codegen.h"
#include "t2246.h"

extern "C" void m16883_gshared (t2246 * __this, t21 * p0, bool p1, const MethodInfo* method);
#define m16883(__this, p0, p1, method) (( void (*) (t2246 *, t21 *, bool, const MethodInfo*))m16883_gshared)(__this, p0, p1, method)
extern "C" t21 * m16884_gshared (t2246 * __this, const MethodInfo* method);
#define m16884(__this, method) (( t21 * (*) (t2246 *, const MethodInfo*))m16884_gshared)(__this, method)
extern "C" void m16885_gshared (t2246 * __this, t21 * p0, const MethodInfo* method);
#define m16885(__this, p0, method) (( void (*) (t2246 *, t21 *, const MethodInfo*))m16885_gshared)(__this, p0, method)
extern "C" bool m16886_gshared (t2246 * __this, const MethodInfo* method);
#define m16886(__this, method) (( bool (*) (t2246 *, const MethodInfo*))m16886_gshared)(__this, method)
extern "C" void m16887_gshared (t2246 * __this, bool p0, const MethodInfo* method);
#define m16887(__this, p0, method) (( void (*) (t2246 *, bool, const MethodInfo*))m16887_gshared)(__this, p0, method)
extern "C" t31* m16888_gshared (t2246 * __this, const MethodInfo* method);
#define m16888(__this, method) (( t31* (*) (t2246 *, const MethodInfo*))m16888_gshared)(__this, method)
