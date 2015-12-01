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

struct t1747;

#include "codegen/il2cpp-codegen.h"
#include "t1603.h"

extern "C" void m10504_gshared (t1747 * __this, const MethodInfo* method);
#define m10504(__this, method) (( void (*) (t1747 *, const MethodInfo*))m10504_gshared)(__this, method)
extern "C" int32_t m17848_gshared (t1747 * __this, t1603  p0, t1603  p1, const MethodInfo* method);
#define m17848(__this, p0, p1, method) (( int32_t (*) (t1747 *, t1603 , t1603 , const MethodInfo*))m17848_gshared)(__this, p0, p1, method)
