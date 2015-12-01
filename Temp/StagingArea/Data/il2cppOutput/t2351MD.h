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

struct t2351;

#include "codegen/il2cpp-codegen.h"
#include "t512.h"

extern "C" void m17845_gshared (t2351 * __this, const MethodInfo* method);
#define m17845(__this, method) (( void (*) (t2351 *, const MethodInfo*))m17845_gshared)(__this, method)
extern "C" int32_t m17846_gshared (t2351 * __this, t512  p0, const MethodInfo* method);
#define m17846(__this, p0, method) (( int32_t (*) (t2351 *, t512 , const MethodInfo*))m17846_gshared)(__this, p0, method)
extern "C" bool m17847_gshared (t2351 * __this, t512  p0, t512  p1, const MethodInfo* method);
#define m17847(__this, p0, p1, method) (( bool (*) (t2351 *, t512 , t512 , const MethodInfo*))m17847_gshared)(__this, p0, p1, method)
