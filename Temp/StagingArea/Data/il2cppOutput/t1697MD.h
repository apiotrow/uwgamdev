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

struct t1697;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m10305_gshared (t1697 * __this, const MethodInfo* method);
#define m10305(__this, method) (( void (*) (t1697 *, const MethodInfo*))m10305_gshared)(__this, method)
extern "C" int32_t m10306_gshared (t1697 * __this, t2 * p0, const MethodInfo* method);
#define m10306(__this, p0, method) (( int32_t (*) (t1697 *, t2 *, const MethodInfo*))m10306_gshared)(__this, p0, method)
extern "C" bool m10307_gshared (t1697 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m10307(__this, p0, p1, method) (( bool (*) (t1697 *, t2 *, t2 *, const MethodInfo*))m10307_gshared)(__this, p0, p1, method)
