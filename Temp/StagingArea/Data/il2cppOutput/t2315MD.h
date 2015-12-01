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

struct t2315;

#include "codegen/il2cpp-codegen.h"
#include "t1286.h"

extern "C" void m17470_gshared (t2315 * __this, const MethodInfo* method);
#define m17470(__this, method) (( void (*) (t2315 *, const MethodInfo*))m17470_gshared)(__this, method)
extern "C" int32_t m17471_gshared (t2315 * __this, t1286  p0, t1286  p1, const MethodInfo* method);
#define m17471(__this, p0, p1, method) (( int32_t (*) (t2315 *, t1286 , t1286 , const MethodInfo*))m17471_gshared)(__this, p0, p1, method)
