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

struct t2103;

#include "codegen/il2cpp-codegen.h"
#include "t32.h"

extern "C" void m15304_gshared (t2103 * __this, const MethodInfo* method);
#define m15304(__this, method) (( void (*) (t2103 *, const MethodInfo*))m15304_gshared)(__this, method)
extern "C" int32_t m15305_gshared (t2103 * __this, t32  p0, const MethodInfo* method);
#define m15305(__this, p0, method) (( int32_t (*) (t2103 *, t32 , const MethodInfo*))m15305_gshared)(__this, p0, method)
extern "C" bool m15306_gshared (t2103 * __this, t32  p0, t32  p1, const MethodInfo* method);
#define m15306(__this, p0, p1, method) (( bool (*) (t2103 *, t32 , t32 , const MethodInfo*))m15306_gshared)(__this, p0, p1, method)
