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

struct t502;
struct t502_marshaled;
struct t21;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m3136 (t502 * __this, t21 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3137 (t502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3138 (t21 * __this , t502 * p0, t502 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t502_marshal(const t502& unmarshaled, t502_marshaled& marshaled);
extern "C" void t502_marshal_back(const t502_marshaled& marshaled, t502& unmarshaled);
extern "C" void t502_marshal_cleanup(t502_marshaled& marshaled);
