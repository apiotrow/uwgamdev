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

struct t2023;
struct t21;
struct t595;
struct t2022;
struct t94;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14080_gshared (t2023 * __this, t21 * p0, t595 * p1, const MethodInfo* method);
#define m14080(__this, p0, p1, method) (( void (*) (t2023 *, t21 *, t595 *, const MethodInfo*))m14080_gshared)(__this, p0, p1, method)
extern "C" void m14081_gshared (t2023 * __this, t2022 * p0, const MethodInfo* method);
#define m14081(__this, p0, method) (( void (*) (t2023 *, t2022 *, const MethodInfo*))m14081_gshared)(__this, p0, method)
extern "C" void m14082_gshared (t2023 * __this, t94* p0, const MethodInfo* method);
#define m14082(__this, p0, method) (( void (*) (t2023 *, t94*, const MethodInfo*))m14082_gshared)(__this, p0, method)
extern "C" bool m14083_gshared (t2023 * __this, t21 * p0, t595 * p1, const MethodInfo* method);
#define m14083(__this, p0, p1, method) (( bool (*) (t2023 *, t21 *, t595 *, const MethodInfo*))m14083_gshared)(__this, p0, p1, method)
