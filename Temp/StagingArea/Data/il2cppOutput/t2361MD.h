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

struct t2361;
struct t21;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17923_gshared (t2361 * __this, const MethodInfo* method);
#define m17923(__this, method) (( void (*) (t2361 *, const MethodInfo*))m17923_gshared)(__this, method)
extern "C" void m17924_gshared (t21 * __this , const MethodInfo* method);
#define m17924(__this , method) (( void (*) (t21 * , const MethodInfo*))m17924_gshared)(__this , method)
extern "C" int32_t m17925_gshared (t2361 * __this, t21 * p0, t21 * p1, const MethodInfo* method);
#define m17925(__this, p0, p1, method) (( int32_t (*) (t2361 *, t21 *, t21 *, const MethodInfo*))m17925_gshared)(__this, p0, p1, method)
extern "C" t2361 * m17926_gshared (t21 * __this , const MethodInfo* method);
#define m17926(__this , method) (( t2361 * (*) (t21 * , const MethodInfo*))m17926_gshared)(__this , method)
