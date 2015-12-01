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

struct t1983;
struct t2;
struct t163;
struct t164;

#include "codegen/il2cpp-codegen.h"
#include "t18.h"
#include "t68.h"

extern "C" void m14122_gshared (t1983 * __this, t2 * p0, t18 p1, const MethodInfo* method);
#define m14122(__this, p0, p1, method) (( void (*) (t1983 *, t2 *, t18, const MethodInfo*))m14122_gshared)(__this, p0, p1, method)
extern "C" int32_t m14123_gshared (t1983 * __this, t68  p0, t68  p1, const MethodInfo* method);
#define m14123(__this, p0, p1, method) (( int32_t (*) (t1983 *, t68 , t68 , const MethodInfo*))m14123_gshared)(__this, p0, p1, method)
extern "C" t2 * m14124_gshared (t1983 * __this, t68  p0, t68  p1, t164 * p2, t2 * p3, const MethodInfo* method);
#define m14124(__this, p0, p1, p2, p3, method) (( t2 * (*) (t1983 *, t68 , t68 , t164 *, t2 *, const MethodInfo*))m14124_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m14125_gshared (t1983 * __this, t2 * p0, const MethodInfo* method);
#define m14125(__this, p0, method) (( int32_t (*) (t1983 *, t2 *, const MethodInfo*))m14125_gshared)(__this, p0, method)
