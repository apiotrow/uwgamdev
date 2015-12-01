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

struct t2359;

#include "codegen/il2cpp-codegen.h"
#include "t1622.h"

extern "C" void m17883_gshared (t2359 * __this, const MethodInfo* method);
#define m17883(__this, method) (( void (*) (t2359 *, const MethodInfo*))m17883_gshared)(__this, method)
extern "C" int32_t m17884_gshared (t2359 * __this, t1622  p0, const MethodInfo* method);
#define m17884(__this, p0, method) (( int32_t (*) (t2359 *, t1622 , const MethodInfo*))m17884_gshared)(__this, p0, method)
extern "C" bool m17885_gshared (t2359 * __this, t1622  p0, t1622  p1, const MethodInfo* method);
#define m17885(__this, p0, p1, method) (( bool (*) (t2359 *, t1622 , t1622 , const MethodInfo*))m17885_gshared)(__this, p0, p1, method)
