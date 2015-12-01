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

struct t2128;
struct t2;
struct t163;
struct t164;

#include "codegen/il2cpp-codegen.h"
#include "t18.h"
#include "t950.h"

extern "C" void m15849_gshared (t2128 * __this, t2 * p0, t18 p1, const MethodInfo* method);
#define m15849(__this, p0, p1, method) (( void (*) (t2128 *, t2 *, t18, const MethodInfo*))m15849_gshared)(__this, p0, p1, method)
extern "C" t950  m15850_gshared (t2128 * __this, t2 * p0, bool p1, const MethodInfo* method);
#define m15850(__this, p0, p1, method) (( t950  (*) (t2128 *, t2 *, bool, const MethodInfo*))m15850_gshared)(__this, p0, p1, method)
extern "C" t2 * m15851_gshared (t2128 * __this, t2 * p0, bool p1, t164 * p2, t2 * p3, const MethodInfo* method);
#define m15851(__this, p0, p1, p2, p3, method) (( t2 * (*) (t2128 *, t2 *, bool, t164 *, t2 *, const MethodInfo*))m15851_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t950  m15852_gshared (t2128 * __this, t2 * p0, const MethodInfo* method);
#define m15852(__this, p0, method) (( t950  (*) (t2128 *, t2 *, const MethodInfo*))m15852_gshared)(__this, p0, method)
