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

struct t1700;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" void m10316_gshared (t1700 * __this, const MethodInfo* method);
#define m10316(__this, method) (( void (*) (t1700 *, const MethodInfo*))m10316_gshared)(__this, method)
extern "C" int32_t m10317_gshared (t1700 * __this, t2 * p0, t2 * p1, const MethodInfo* method);
#define m10317(__this, p0, p1, method) (( int32_t (*) (t1700 *, t2 *, t2 *, const MethodInfo*))m10317_gshared)(__this, p0, p1, method)
