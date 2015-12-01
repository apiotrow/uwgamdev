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

struct t2080;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15278_gshared (t2080 * __this, const MethodInfo* method);
#define m15278(__this, method) (( void (*) (t2080 *, const MethodInfo*))m15278_gshared)(__this, method)
extern "C" void m15279_gshared (t2 * __this , const MethodInfo* method);
#define m15279(__this , method) (( void (*) (t2 * , const MethodInfo*))m15279_gshared)(__this , method)
extern "C" int32_t m15280_gshared (t2080 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m15280(__this, p0, p1, method) (( int32_t (*) (t2080 *, t2 *, t2 *, const MethodInfo*))m15280_gshared)(__this, p0, p1, method)
extern "C" t2080 * m15281_gshared (t2 * __this , const MethodInfo* method);
#define m15281(__this , method) (( t2080 * (*) (t2 * , const MethodInfo*))m15281_gshared)(__this , method)
