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

struct t2245;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16843_gshared (t2245 * __this, const MethodInfo* method);
#define m16843(__this, method) (( void (*) (t2245 *, const MethodInfo*))m16843_gshared)(__this, method)
extern "C" void m16844_gshared (t2 * __this , const MethodInfo* method);
#define m16844(__this , method) (( void (*) (t2 * , const MethodInfo*))m16844_gshared)(__this , method)
extern "C" int32_t m16845_gshared (t2245 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m16845(__this, p0, p1, method) (( int32_t (*) (t2245 *, t2 *, t2 *, const MethodInfo*))m16845_gshared)(__this, p0, p1, method)
extern "C" t2245 * m16846_gshared (t2 * __this , const MethodInfo* method);
#define m16846(__this , method) (( t2245 * (*) (t2 * , const MethodInfo*))m16846_gshared)(__this , method)
