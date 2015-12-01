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

struct t624;
struct t33;
struct t33_marshaled;
struct t595;
struct t94;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3272_gshared (t624 * __this, t33 * p0, t595 * p1, bool p2, const MethodInfo* method);
#define m3272(__this, p0, p1, p2, method) (( void (*) (t624 *, t33 *, t595 *, bool, const MethodInfo*))m3272_gshared)(__this, p0, p1, p2, method)
extern "C" void m16544_gshared (t624 * __this, t94* p0, const MethodInfo* method);
#define m16544(__this, p0, method) (( void (*) (t624 *, t94*, const MethodInfo*))m16544_gshared)(__this, p0, method)
