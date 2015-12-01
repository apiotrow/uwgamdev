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

struct t622;
struct t33;
struct t33_marshaled;
struct t595;
struct t94;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3270_gshared (t622 * __this, t33 * p0, t595 * p1, int32_t p2, const MethodInfo* method);
#define m3270(__this, p0, p1, p2, method) (( void (*) (t622 *, t33 *, t595 *, int32_t, const MethodInfo*))m3270_gshared)(__this, p0, p1, p2, method)
extern "C" void m16538_gshared (t622 * __this, t94* p0, const MethodInfo* method);
#define m16538(__this, p0, method) (( void (*) (t622 *, t94*, const MethodInfo*))m16538_gshared)(__this, p0, method)
