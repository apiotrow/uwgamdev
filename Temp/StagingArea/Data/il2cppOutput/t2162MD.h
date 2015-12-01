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

struct t2162;
struct t21;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15889_gshared (t2162 * __this, const MethodInfo* method);
#define m15889(__this, method) (( void (*) (t2162 *, const MethodInfo*))m15889_gshared)(__this, method)
extern "C" void m15890_gshared (t21 * __this , const MethodInfo* method);
#define m15890(__this , method) (( void (*) (t21 * , const MethodInfo*))m15890_gshared)(__this , method)
extern "C" int32_t m15891_gshared (t2162 * __this, t21 * p0, t21 * p1, const MethodInfo* method);
#define m15891(__this, p0, p1, method) (( int32_t (*) (t2162 *, t21 *, t21 *, const MethodInfo*))m15891_gshared)(__this, p0, p1, method)
extern "C" t2162 * m15892_gshared (t21 * __this , const MethodInfo* method);
#define m15892(__this , method) (( t2162 * (*) (t21 * , const MethodInfo*))m15892_gshared)(__this , method)
