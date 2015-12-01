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

struct t2211;
struct t2;
struct t163;
struct t164;

#include "codegen/il2cpp-codegen.h"
#include "t18.h"
#include "t1220.h"

extern "C" void m16558_gshared (t2211 * __this, t2 * p0, t18 p1, const MethodInfo* method);
#define m16558(__this, p0, p1, method) (( void (*) (t2211 *, t2 *, t18, const MethodInfo*))m16558_gshared)(__this, p0, p1, method)
extern "C" int32_t m16559_gshared (t2211 * __this, t1220  p0, t1220  p1, const MethodInfo* method);
#define m16559(__this, p0, p1, method) (( int32_t (*) (t2211 *, t1220 , t1220 , const MethodInfo*))m16559_gshared)(__this, p0, p1, method)
extern "C" t2 * m16560_gshared (t2211 * __this, t1220  p0, t1220  p1, t164 * p2, t2 * p3, const MethodInfo* method);
#define m16560(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2211 *, t1220 , t1220 , t164 *, t2 *, const MethodInfo*))m16560_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16561_gshared (t2211 * __this, t2 * p0, const MethodInfo* method);
#define m16561(__this, p0, method) (( int32_t (*) (t2211 *, t2 *, const MethodInfo*))m16561_gshared)(__this, p0, method)
