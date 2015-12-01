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

struct t2152;
struct t21;
struct t227;
struct t228;

#include "codegen/il2cpp-codegen.h"
#include "t69.h"
#include "t406.h"

extern "C" void m15742_gshared (t2152 * __this, t21 * p0, t69 p1, const MethodInfo* method);
#define m15742(__this, p0, p1, method) (( void (*) (t2152 *, t21 *, t69, const MethodInfo*))m15742_gshared)(__this, p0, p1, method)
extern "C" bool m15743_gshared (t2152 * __this, t406  p0, const MethodInfo* method);
#define m15743(__this, p0, method) (( bool (*) (t2152 *, t406 , const MethodInfo*))m15743_gshared)(__this, p0, method)
extern "C" t21 * m15744_gshared (t2152 * __this, t406  p0, t228 * p1, t21 * p2, const MethodInfo* method);
#define m15744(__this, p0, p1, p2, method) (( t21 * (*) (t2152 *, t406 , t228 *, t21 *, const MethodInfo*))m15744_gshared)(__this, p0, p1, p2, method)
extern "C" bool m15745_gshared (t2152 * __this, t21 * p0, const MethodInfo* method);
#define m15745(__this, p0, method) (( bool (*) (t2152 *, t21 *, const MethodInfo*))m15745_gshared)(__this, p0, method)
