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

struct t1980;
struct t2;
struct t163;
struct t164;

#include "codegen/il2cpp-codegen.h"
#include "t18.h"
#include "t68.h"

extern "C" void m14112_gshared (t1980 * __this, t2 * p0, t18 p1, const MethodInfo* method);
#define m14112(__this, p0, p1, method) (( void (*) (t1980 *, t2 *, t18, const MethodInfo*))m14112_gshared)(__this, p0, p1, method)
extern "C" bool m14113_gshared (t1980 * __this, t68  p0, const MethodInfo* method);
#define m14113(__this, p0, method) (( bool (*) (t1980 *, t68 , const MethodInfo*))m14113_gshared)(__this, p0, method)
extern "C" t2 * m14114_gshared (t1980 * __this, t68  p0, t164 * p1, t2 * p2, const MethodInfo* method);
#define m14114(__this, p0, p1, p2, method) (( t2 * (*) (t1980 *, t68 , t164 *, t2 *, const MethodInfo*))m14114_gshared)(__this, p0, p1, p2, method)
extern "C" bool m14115_gshared (t1980 * __this, t2 * p0, const MethodInfo* method);
#define m14115(__this, p0, method) (( bool (*) (t1980 *, t2 *, const MethodInfo*))m14115_gshared)(__this, p0, method)
