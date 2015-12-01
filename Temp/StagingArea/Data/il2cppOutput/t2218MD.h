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

struct t2218;
struct t33;
struct t33_marshaled;
struct t595;
struct t21;
struct t94;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16535_gshared (t2218 * __this, t33 * p0, t595 * p1, t21 * p2, const MethodInfo* method);
#define m16535(__this, p0, p1, p2, method) (( void (*) (t2218 *, t33 *, t595 *, t21 *, const MethodInfo*))m16535_gshared)(__this, p0, p1, p2, method)
extern "C" void m16536_gshared (t2218 * __this, t94* p0, const MethodInfo* method);
#define m16536(__this, p0, method) (( void (*) (t2218 *, t94*, const MethodInfo*))m16536_gshared)(__this, p0, method)
