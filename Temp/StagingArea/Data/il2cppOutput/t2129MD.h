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

struct t2;
struct t10;

#include "codegen/il2cpp-codegen.h"
#include "t2129.h"

extern "C" void m15799_gshared (t2129 * __this, t2 * p0, bool p1, const MethodInfo* method);
#define m15799(__this, p0, p1, method) (( void (*) (t2129 *, t2 *, bool, const MethodInfo*))m15799_gshared)(__this, p0, p1, method)
extern "C" t2 * m15800_gshared (t2129 * __this, const MethodInfo* method);
#define m15800(__this, method) (( t2 * (*) (t2129 *, const MethodInfo*))m15800_gshared)(__this, method)
extern "C" void m15801_gshared (t2129 * __this, t2 * p0, const MethodInfo* method);
#define m15801(__this, p0, method) (( void (*) (t2129 *, t2 *, const MethodInfo*))m15801_gshared)(__this, p0, method)
extern "C" bool m15802_gshared (t2129 * __this, const MethodInfo* method);
#define m15802(__this, method) (( bool (*) (t2129 *, const MethodInfo*))m15802_gshared)(__this, method)
extern "C" void m15803_gshared (t2129 * __this, bool p0, const MethodInfo* method);
#define m15803(__this, p0, method) (( void (*) (t2129 *, bool, const MethodInfo*))m15803_gshared)(__this, p0, method)
extern "C" t10* m15804_gshared (t2129 * __this, const MethodInfo* method);
#define m15804(__this, method) (( t10* (*) (t2129 *, const MethodInfo*))m15804_gshared)(__this, method)
