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

struct t1684;

#include "codegen/il2cpp-codegen.h"
#include "t1557.h"

extern "C" void m10112_gshared (t1684 * __this, const MethodInfo* method);
#define m10112(__this, method) (( void (*) (t1684 *, const MethodInfo*))m10112_gshared)(__this, method)
extern "C" int32_t m16789_gshared (t1684 * __this, t1557  p0, t1557  p1, const MethodInfo* method);
#define m16789(__this, p0, p1, method) (( int32_t (*) (t1684 *, t1557 , t1557 , const MethodInfo*))m16789_gshared)(__this, p0, p1, method)
