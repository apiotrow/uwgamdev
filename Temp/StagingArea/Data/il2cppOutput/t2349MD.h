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

struct t2349;

#include "codegen/il2cpp-codegen.h"
#include "t512.h"

extern "C" void m17836_gshared (t2349 * __this, const MethodInfo* method);
#define m17836(__this, method) (( void (*) (t2349 *, const MethodInfo*))m17836_gshared)(__this, method)
extern "C" int32_t m17837_gshared (t2349 * __this, t512  p0, t512  p1, const MethodInfo* method);
#define m17837(__this, p0, p1, method) (( int32_t (*) (t2349 *, t512 , t512 , const MethodInfo*))m17837_gshared)(__this, p0, p1, method)
