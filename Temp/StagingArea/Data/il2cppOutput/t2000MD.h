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

struct t2000;
struct t2;
struct t163;
struct t164;

#include "codegen/il2cpp-codegen.h"
#include "t18.h"
#include "t292.h"

extern "C" void m14398_gshared (t2000 * __this, t2 * p0, t18 p1, const MethodInfo* method);
#define m14398(__this, p0, p1, method) (( void (*) (t2000 *, t2 *, t18, const MethodInfo*))m14398_gshared)(__this, p0, p1, method)
extern "C" bool m14399_gshared (t2000 * __this, t292  p0, const MethodInfo* method);
#define m14399(__this, p0, method) (( bool (*) (t2000 *, t292 , const MethodInfo*))m14399_gshared)(__this, p0, method)
extern "C" t2 * m14400_gshared (t2000 * __this, t292  p0, t164 * p1, t2 * p2, const MethodInfo* method);
#define m14400(__this, p0, p1, p2, method) (( t2 * (*) (t2000 *, t292 , t164 *, t2 *, const MethodInfo*))m14400_gshared)(__this, p0, p1, p2, method)
extern "C" bool m14401_gshared (t2000 * __this, t2 * p0, const MethodInfo* method);
#define m14401(__this, p0, method) (( bool (*) (t2000 *, t2 *, const MethodInfo*))m14401_gshared)(__this, p0, method)
