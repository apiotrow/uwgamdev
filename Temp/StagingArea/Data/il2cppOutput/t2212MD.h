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

struct t2212;
struct t21;
struct t595;
struct t94;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16514_gshared (t2212 * __this, t21 * p0, t595 * p1, const MethodInfo* method);
#define m16514(__this, p0, p1, method) (( void (*) (t2212 *, t21 *, t595 *, const MethodInfo*))m16514_gshared)(__this, p0, p1, method)
extern "C" void m16515_gshared (t2212 * __this, t94* p0, const MethodInfo* method);
#define m16515(__this, p0, method) (( void (*) (t2212 *, t94*, const MethodInfo*))m16515_gshared)(__this, p0, method)
extern "C" bool m16516_gshared (t2212 * __this, t21 * p0, t595 * p1, const MethodInfo* method);
#define m16516(__this, p0, p1, method) (( bool (*) (t2212 *, t21 *, t595 *, const MethodInfo*))m16516_gshared)(__this, p0, p1, method)
