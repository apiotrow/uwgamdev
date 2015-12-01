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

struct t2210;

#include "codegen/il2cpp-codegen.h"
#include "t1220.h"

extern "C" void m16556_gshared (t2210 * __this, const MethodInfo* method);
#define m16556(__this, method) (( void (*) (t2210 *, const MethodInfo*))m16556_gshared)(__this, method)
extern "C" int32_t m16557_gshared (t2210 * __this, t1220  p0, t1220  p1, const MethodInfo* method);
#define m16557(__this, p0, p1, method) (( int32_t (*) (t2210 *, t1220 , t1220 , const MethodInfo*))m16557_gshared)(__this, p0, p1, method)
