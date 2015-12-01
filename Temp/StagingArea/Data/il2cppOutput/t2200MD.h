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

struct t2200;
struct t2;
struct t163;
struct t164;

#include "codegen/il2cpp-codegen.h"
#include "t18.h"
#include "t1221.h"

extern "C" void m16392_gshared (t2200 * __this, t2 * p0, t18 p1, const MethodInfo* method);
#define m16392(__this, p0, p1, method) (( void (*) (t2200 *, t2 *, t18, const MethodInfo*))m16392_gshared)(__this, p0, p1, method)
extern "C" int32_t m16393_gshared (t2200 * __this, t1221  p0, t1221  p1, const MethodInfo* method);
#define m16393(__this, p0, p1, method) (( int32_t (*) (t2200 *, t1221 , t1221 , const MethodInfo*))m16393_gshared)(__this, p0, p1, method)
extern "C" t2 * m16394_gshared (t2200 * __this, t1221  p0, t1221  p1, t164 * p2, t2 * p3, const MethodInfo* method);
#define m16394(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2200 *, t1221 , t1221 , t164 *, t2 *, const MethodInfo*))m16394_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16395_gshared (t2200 * __this, t2 * p0, const MethodInfo* method);
#define m16395(__this, p0, method) (( int32_t (*) (t2200 *, t2 *, const MethodInfo*))m16395_gshared)(__this, p0, method)
