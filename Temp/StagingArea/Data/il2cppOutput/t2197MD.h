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

struct t2197;
struct t2;
struct t163;
struct t164;

#include "codegen/il2cpp-codegen.h"
#include "t18.h"
#include "t1221.h"

extern "C" void m16382_gshared (t2197 * __this, t2 * p0, t18 p1, const MethodInfo* method);
#define m16382(__this, p0, p1, method) (( void (*) (t2197 *, t2 *, t18, const MethodInfo*))m16382_gshared)(__this, p0, p1, method)
extern "C" bool m16383_gshared (t2197 * __this, t1221  p0, const MethodInfo* method);
#define m16383(__this, p0, method) (( bool (*) (t2197 *, t1221 , const MethodInfo*))m16383_gshared)(__this, p0, method)
extern "C" t2 * m16384_gshared (t2197 * __this, t1221  p0, t164 * p1, t2 * p2, const MethodInfo* method);
#define m16384(__this, p0, p1, p2, method) (( t2 * (*) (t2197 *, t1221 , t164 *, t2 *, const MethodInfo*))m16384_gshared)(__this, p0, p1, p2, method)
extern "C" bool m16385_gshared (t2197 * __this, t2 * p0, const MethodInfo* method);
#define m16385(__this, p0, method) (( bool (*) (t2197 *, t2 *, const MethodInfo*))m16385_gshared)(__this, p0, method)
