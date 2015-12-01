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

struct t2214;
struct t21;
struct t595;
struct t94;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16521_gshared (t2214 * __this, t21 * p0, t595 * p1, const MethodInfo* method);
#define m16521(__this, p0, p1, method) (( void (*) (t2214 *, t21 *, t595 *, const MethodInfo*))m16521_gshared)(__this, p0, p1, method)
extern "C" void m16522_gshared (t2214 * __this, t94* p0, const MethodInfo* method);
#define m16522(__this, p0, method) (( void (*) (t2214 *, t94*, const MethodInfo*))m16522_gshared)(__this, p0, method)
extern "C" bool m16523_gshared (t2214 * __this, t21 * p0, t595 * p1, const MethodInfo* method);
#define m16523(__this, p0, p1, method) (( bool (*) (t2214 *, t21 *, t595 *, const MethodInfo*))m16523_gshared)(__this, p0, p1, method)
