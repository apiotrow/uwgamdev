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

struct t1745;

#include "codegen/il2cpp-codegen.h"
#include "t512.h"

extern "C" void m10502_gshared (t1745 * __this, const MethodInfo* method);
#define m10502(__this, method) (( void (*) (t1745 *, const MethodInfo*))m10502_gshared)(__this, method)
extern "C" int32_t m17831_gshared (t1745 * __this, t512  p0, t512  p1, const MethodInfo* method);
#define m17831(__this, p0, p1, method) (( int32_t (*) (t1745 *, t512 , t512 , const MethodInfo*))m17831_gshared)(__this, p0, p1, method)
