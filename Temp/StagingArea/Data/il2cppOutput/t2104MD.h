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

struct t2104;
struct t21;
struct t227;
struct t228;

#include "codegen/il2cpp-codegen.h"
#include "t69.h"
#include "t32.h"

extern "C" void m15307_gshared (t2104 * __this, t21 * p0, t69 p1, const MethodInfo* method);
#define m15307(__this, p0, p1, method) (( void (*) (t2104 *, t21 *, t69, const MethodInfo*))m15307_gshared)(__this, p0, p1, method)
extern "C" bool m15308_gshared (t2104 * __this, t32  p0, const MethodInfo* method);
#define m15308(__this, p0, method) (( bool (*) (t2104 *, t32 , const MethodInfo*))m15308_gshared)(__this, p0, method)
extern "C" t21 * m15309_gshared (t2104 * __this, t32  p0, t228 * p1, t21 * p2, const MethodInfo* method);
#define m15309(__this, p0, p1, p2, method) (( t21 * (*) (t2104 *, t32 , t228 *, t21 *, const MethodInfo*))m15309_gshared)(__this, p0, p1, p2, method)
extern "C" bool m15310_gshared (t2104 * __this, t21 * p0, const MethodInfo* method);
#define m15310(__this, p0, method) (( bool (*) (t2104 *, t21 *, const MethodInfo*))m15310_gshared)(__this, p0, method)
