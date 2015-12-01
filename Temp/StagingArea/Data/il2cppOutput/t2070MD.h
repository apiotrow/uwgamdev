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

struct t2070;
struct t2;
struct t163;
struct t164;

#include "codegen/il2cpp-codegen.h"
#include "t18.h"
#include "t363.h"

extern "C" void m15131_gshared (t2070 * __this, t2 * p0, t18 p1, const MethodInfo* method);
#define m15131(__this, p0, p1, method) (( void (*) (t2070 *, t2 *, t18, const MethodInfo*))m15131_gshared)(__this, p0, p1, method)
extern "C" bool m15132_gshared (t2070 * __this, t363  p0, const MethodInfo* method);
#define m15132(__this, p0, method) (( bool (*) (t2070 *, t363 , const MethodInfo*))m15132_gshared)(__this, p0, method)
extern "C" t2 * m15133_gshared (t2070 * __this, t363  p0, t164 * p1, t2 * p2, const MethodInfo* method);
#define m15133(__this, p0, p1, p2, method) (( t2 * (*) (t2070 *, t363 , t164 *, t2 *, const MethodInfo*))m15133_gshared)(__this, p0, p1, p2, method)
extern "C" bool m15134_gshared (t2070 * __this, t2 * p0, const MethodInfo* method);
#define m15134(__this, p0, method) (( bool (*) (t2070 *, t2 *, const MethodInfo*))m15134_gshared)(__this, p0, method)
