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

struct t2106;

#include "codegen/il2cpp-codegen.h"
#include "t32.h"

extern "C" void m15315_gshared (t2106 * __this, const MethodInfo* method);
#define m15315(__this, method) (( void (*) (t2106 *, const MethodInfo*))m15315_gshared)(__this, method)
extern "C" int32_t m15316_gshared (t2106 * __this, t32  p0, t32  p1, const MethodInfo* method);
#define m15316(__this, p0, p1, method) (( int32_t (*) (t2106 *, t32 , t32 , const MethodInfo*))m15316_gshared)(__this, p0, p1, method)
