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

struct t2331;
struct t21;
struct t227;
struct t228;

#include "codegen/il2cpp-codegen.h"
#include "t69.h"

extern "C" void m17668_gshared (t2331 * __this, t21 * p0, t69 p1, const MethodInfo* method);
#define m17668(__this, p0, p1, method) (( void (*) (t2331 *, t21 *, t69, const MethodInfo*))m17668_gshared)(__this, p0, p1, method)
extern "C" t21 * m17669_gshared (t2331 * __this, const MethodInfo* method);
#define m17669(__this, method) (( t21 * (*) (t2331 *, const MethodInfo*))m17669_gshared)(__this, method)
extern "C" t21 * m17670_gshared (t2331 * __this, t228 * p0, t21 * p1, const MethodInfo* method);
#define m17670(__this, p0, p1, method) (( t21 * (*) (t2331 *, t228 *, t21 *, const MethodInfo*))m17670_gshared)(__this, p0, p1, method)
extern "C" t21 * m17671_gshared (t2331 * __this, t21 * p0, const MethodInfo* method);
#define m17671(__this, p0, method) (( t21 * (*) (t2331 *, t21 *, const MethodInfo*))m17671_gshared)(__this, p0, method)
