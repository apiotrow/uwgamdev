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

struct t93;
struct t93_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2242 (t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2243 (t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2244 (t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t93_marshal(const t93& unmarshaled, t93_marshaled& marshaled);
extern "C" void t93_marshal_back(const t93_marshaled& marshaled, t93& unmarshaled);
extern "C" void t93_marshal_cleanup(t93_marshaled& marshaled);
