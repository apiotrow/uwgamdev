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

struct t2084;
struct t21;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15019_gshared (t2084 * __this, const MethodInfo* method);
#define m15019(__this, method) (( void (*) (t2084 *, const MethodInfo*))m15019_gshared)(__this, method)
extern "C" void m15020_gshared (t21 * __this , const MethodInfo* method);
#define m15020(__this , method) (( void (*) (t21 * , const MethodInfo*))m15020_gshared)(__this , method)
extern "C" int32_t m15021_gshared (t2084 * __this, t21 * p0, t21 * p1, const MethodInfo* method);
#define m15021(__this, p0, p1, method) (( int32_t (*) (t2084 *, t21 *, t21 *, const MethodInfo*))m15021_gshared)(__this, p0, p1, method)
extern "C" t2084 * m15022_gshared (t21 * __this , const MethodInfo* method);
#define m15022(__this , method) (( t2084 * (*) (t21 * , const MethodInfo*))m15022_gshared)(__this , method)
