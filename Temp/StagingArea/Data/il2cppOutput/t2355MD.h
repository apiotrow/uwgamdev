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

struct t2355;

#include "codegen/il2cpp-codegen.h"
#include "t1603.h"

extern "C" void m17862_gshared (t2355 * __this, const MethodInfo* method);
#define m17862(__this, method) (( void (*) (t2355 *, const MethodInfo*))m17862_gshared)(__this, method)
extern "C" int32_t m17863_gshared (t2355 * __this, t1603  p0, const MethodInfo* method);
#define m17863(__this, p0, method) (( int32_t (*) (t2355 *, t1603 , const MethodInfo*))m17863_gshared)(__this, p0, method)
extern "C" bool m17864_gshared (t2355 * __this, t1603  p0, t1603  p1, const MethodInfo* method);
#define m17864(__this, p0, p1, method) (( bool (*) (t2355 *, t1603 , t1603 , const MethodInfo*))m17864_gshared)(__this, p0, p1, method)
