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

struct t621;
struct t33;
struct t33_marshaled;
struct t595;
struct t94;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3269_gshared (t621 * __this, t33 * p0, t595 * p1, float p2, const MethodInfo* method);
#define m3269(__this, p0, p1, p2, method) (( void (*) (t621 *, t33 *, t595 *, float, const MethodInfo*))m3269_gshared)(__this, p0, p1, p2, method)
extern "C" void m16537_gshared (t621 * __this, t94* p0, const MethodInfo* method);
#define m16537(__this, p0, method) (( void (*) (t621 *, t94*, const MethodInfo*))m16537_gshared)(__this, p0, method)
