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

struct t2160;

#include "codegen/il2cpp-codegen.h"
#include "t404.h"

extern "C" void m15882_gshared (t2160 * __this, const MethodInfo* method);
#define m15882(__this, method) (( void (*) (t2160 *, const MethodInfo*))m15882_gshared)(__this, method)
extern "C" int32_t m15883_gshared (t2160 * __this, t404  p0, const MethodInfo* method);
#define m15883(__this, p0, method) (( int32_t (*) (t2160 *, t404 , const MethodInfo*))m15883_gshared)(__this, p0, method)
extern "C" bool m15884_gshared (t2160 * __this, t404  p0, t404  p1, const MethodInfo* method);
#define m15884(__this, p0, p1, method) (( bool (*) (t2160 *, t404 , t404 , const MethodInfo*))m15884_gshared)(__this, p0, p1, method)
