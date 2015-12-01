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

struct t1752;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m10902_gshared (t1752 * __this, const MethodInfo* method);
#define m10902(__this, method) (( void (*) (t1752 *, const MethodInfo*))m10902_gshared)(__this, method)
extern "C" void m10903_gshared (t2 * __this , const MethodInfo* method);
#define m10903(__this , method) (( void (*) (t2 * , const MethodInfo*))m10903_gshared)(__this , method)
extern "C" int32_t m10904_gshared (t1752 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m10904(__this, p0, p1, method) (( int32_t (*) (t1752 *, t2 *, t2 *, const MethodInfo*))m10904_gshared)(__this, p0, p1, method)
extern "C" t1752 * m10905_gshared (t2 * __this , const MethodInfo* method);
#define m10905(__this , method) (( t1752 * (*) (t2 * , const MethodInfo*))m10905_gshared)(__this , method)
