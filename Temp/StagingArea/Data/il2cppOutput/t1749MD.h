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

struct t1749;

#include "codegen/il2cpp-codegen.h"
#include "t1622.h"

extern "C" void m10509_gshared (t1749 * __this, const MethodInfo* method);
#define m10509(__this, method) (( void (*) (t1749 *, const MethodInfo*))m10509_gshared)(__this, method)
extern "C" int32_t m17869_gshared (t1749 * __this, t1622  p0, t1622  p1, const MethodInfo* method);
#define m17869(__this, p0, p1, method) (( int32_t (*) (t1749 *, t1622 , t1622 , const MethodInfo*))m17869_gshared)(__this, p0, p1, method)
