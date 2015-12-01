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

struct t1982;

#include "codegen/il2cpp-codegen.h"
#include "t68.h"

extern "C" void m14120_gshared (t1982 * __this, const MethodInfo* method);
#define m14120(__this, method) (( void (*) (t1982 *, const MethodInfo*))m14120_gshared)(__this, method)
extern "C" int32_t m14121_gshared (t1982 * __this, t68  p0, t68  p1, const MethodInfo* method);
#define m14121(__this, p0, p1, method) (( int32_t (*) (t1982 *, t68 , t68 , const MethodInfo*))m14121_gshared)(__this, p0, p1, method)
