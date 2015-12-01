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

struct t1981;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14116_gshared (t1981 * __this, const MethodInfo* method);
#define m14116(__this, method) (( void (*) (t1981 *, const MethodInfo*))m14116_gshared)(__this, method)
extern "C" void m14117_gshared (t2 * __this , const MethodInfo* method);
#define m14117(__this , method) (( void (*) (t2 * , const MethodInfo*))m14117_gshared)(__this , method)
extern "C" int32_t m14118_gshared (t1981 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m14118(__this, p0, p1, method) (( int32_t (*) (t1981 *, t2 *, t2 *, const MethodInfo*))m14118_gshared)(__this, p0, p1, method)
extern "C" t1981 * m14119_gshared (t2 * __this , const MethodInfo* method);
#define m14119(__this , method) (( t1981 * (*) (t2 * , const MethodInfo*))m14119_gshared)(__this , method)
