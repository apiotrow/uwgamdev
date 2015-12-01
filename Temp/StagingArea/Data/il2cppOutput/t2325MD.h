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

struct t2325;
struct t21;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17632_gshared (t2325 * __this, const MethodInfo* method);
#define m17632(__this, method) (( void (*) (t2325 *, const MethodInfo*))m17632_gshared)(__this, method)
extern "C" void m17633_gshared (t21 * __this , const MethodInfo* method);
#define m17633(__this , method) (( void (*) (t21 * , const MethodInfo*))m17633_gshared)(__this , method)
extern "C" int32_t m17634_gshared (t2325 * __this, t21 * p0, t21 * p1, const MethodInfo* method);
#define m17634(__this, p0, p1, method) (( int32_t (*) (t2325 *, t21 *, t21 *, const MethodInfo*))m17634_gshared)(__this, p0, p1, method)
extern "C" t2325 * m17635_gshared (t21 * __this , const MethodInfo* method);
#define m17635(__this , method) (( t2325 * (*) (t21 * , const MethodInfo*))m17635_gshared)(__this , method)
