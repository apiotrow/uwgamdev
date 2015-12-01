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

struct t2102;
struct t21;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15299_gshared (t2102 * __this, const MethodInfo* method);
#define m15299(__this, method) (( void (*) (t2102 *, const MethodInfo*))m15299_gshared)(__this, method)
extern "C" void m15300_gshared (t21 * __this , const MethodInfo* method);
#define m15300(__this , method) (( void (*) (t21 * , const MethodInfo*))m15300_gshared)(__this , method)
extern "C" int32_t m15301_gshared (t2102 * __this, t21 * p0, const MethodInfo* method);
#define m15301(__this, p0, method) (( int32_t (*) (t2102 *, t21 *, const MethodInfo*))m15301_gshared)(__this, p0, method)
extern "C" bool m15302_gshared (t2102 * __this, t21 * p0, t21 * p1, const MethodInfo* method);
#define m15302(__this, p0, p1, method) (( bool (*) (t2102 *, t21 *, t21 *, const MethodInfo*))m15302_gshared)(__this, p0, p1, method)
extern "C" t2102 * m15303_gshared (t21 * __this , const MethodInfo* method);
#define m15303(__this , method) (( t2102 * (*) (t21 * , const MethodInfo*))m15303_gshared)(__this , method)
