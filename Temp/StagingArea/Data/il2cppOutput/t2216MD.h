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

struct t2216;
struct t21;
struct t595;
struct t94;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16528_gshared (t2216 * __this, t21 * p0, t595 * p1, const MethodInfo* method);
#define m16528(__this, p0, p1, method) (( void (*) (t2216 *, t21 *, t595 *, const MethodInfo*))m16528_gshared)(__this, p0, p1, method)
extern "C" void m16529_gshared (t2216 * __this, t94* p0, const MethodInfo* method);
#define m16529(__this, p0, method) (( void (*) (t2216 *, t94*, const MethodInfo*))m16529_gshared)(__this, p0, method)
extern "C" bool m16530_gshared (t2216 * __this, t21 * p0, t595 * p1, const MethodInfo* method);
#define m16530(__this, p0, p1, method) (( bool (*) (t2216 *, t21 *, t595 *, const MethodInfo*))m16530_gshared)(__this, p0, p1, method)
