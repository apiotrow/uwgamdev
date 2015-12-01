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

struct t1752;

#include "codegen/il2cpp-codegen.h"
#include "t932.h"

extern "C" void m10512_gshared (t1752 * __this, const MethodInfo* method);
#define m10512(__this, method) (( void (*) (t1752 *, const MethodInfo*))m10512_gshared)(__this, method)
extern "C" int32_t m17922_gshared (t1752 * __this, t932  p0, t932  p1, const MethodInfo* method);
#define m17922(__this, p0, p1, method) (( int32_t (*) (t1752 *, t932 , t932 , const MethodInfo*))m17922_gshared)(__this, p0, p1, method)
