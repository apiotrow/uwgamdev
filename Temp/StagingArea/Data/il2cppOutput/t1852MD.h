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

struct t1852;
struct t21;

#include "codegen/il2cpp-codegen.h"

extern "C" void m11686_gshared (t1852 * __this, const MethodInfo* method);
#define m11686(__this, method) (( void (*) (t1852 *, const MethodInfo*))m11686_gshared)(__this, method)
extern "C" void m11687_gshared (t21 * __this , const MethodInfo* method);
#define m11687(__this , method) (( void (*) (t21 * , const MethodInfo*))m11687_gshared)(__this , method)
extern "C" int32_t m11688_gshared (t1852 * __this, t21 * p0, t21 * p1, const MethodInfo* method);
#define m11688(__this, p0, p1, method) (( int32_t (*) (t1852 *, t21 *, t21 *, const MethodInfo*))m11688_gshared)(__this, p0, p1, method)
extern "C" t1852 * m11689_gshared (t21 * __this , const MethodInfo* method);
#define m11689(__this , method) (( t1852 * (*) (t21 * , const MethodInfo*))m11689_gshared)(__this , method)
