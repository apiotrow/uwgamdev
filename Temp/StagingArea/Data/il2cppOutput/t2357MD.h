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

struct t2357;

#include "codegen/il2cpp-codegen.h"
#include "t1622.h"

extern "C" void m17874_gshared (t2357 * __this, const MethodInfo* method);
#define m17874(__this, method) (( void (*) (t2357 *, const MethodInfo*))m17874_gshared)(__this, method)
extern "C" int32_t m17875_gshared (t2357 * __this, t1622  p0, t1622  p1, const MethodInfo* method);
#define m17875(__this, p0, p1, method) (( int32_t (*) (t2357 *, t1622 , t1622 , const MethodInfo*))m17875_gshared)(__this, p0, p1, method)
