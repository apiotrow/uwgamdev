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

struct t1886;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m12693_gshared (t1886 * __this, const MethodInfo* method);
#define m12693(__this, method) (( void (*) (t1886 *, const MethodInfo*))m12693_gshared)(__this, method)
extern "C" void m12694_gshared (t2 * __this , const MethodInfo* method);
#define m12694(__this , method) (( void (*) (t2 * , const MethodInfo*))m12694_gshared)(__this , method)
extern "C" int32_t m12695_gshared (t1886 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m12695(__this, p0, p1, method) (( int32_t (*) (t1886 *, t2 *, t2 *, const MethodInfo*))m12695_gshared)(__this, p0, p1, method)
extern "C" t1886 * m12696_gshared (t2 * __this , const MethodInfo* method);
#define m12696(__this , method) (( t1886 * (*) (t2 * , const MethodInfo*))m12696_gshared)(__this , method)
