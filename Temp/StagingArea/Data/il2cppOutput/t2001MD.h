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

struct t2001;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14402_gshared (t2001 * __this, const MethodInfo* method);
#define m14402(__this, method) (( void (*) (t2001 *, const MethodInfo*))m14402_gshared)(__this, method)
extern "C" void m14403_gshared (t2 * __this , const MethodInfo* method);
#define m14403(__this , method) (( void (*) (t2 * , const MethodInfo*))m14403_gshared)(__this , method)
extern "C" int32_t m14404_gshared (t2001 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m14404(__this, p0, p1, method) (( int32_t (*) (t2001 *, t2 *, t2 *, const MethodInfo*))m14404_gshared)(__this, p0, p1, method)
extern "C" t2001 * m14405_gshared (t2 * __this , const MethodInfo* method);
#define m14405(__this , method) (( t2001 * (*) (t2 * , const MethodInfo*))m14405_gshared)(__this , method)
