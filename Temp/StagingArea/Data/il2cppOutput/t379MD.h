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

struct t379;
struct t379_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m1805 (t379 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t379_marshal(const t379& unmarshaled, t379_marshaled& marshaled);
extern "C" void t379_marshal_back(const t379_marshaled& marshaled, t379& unmarshaled);
extern "C" void t379_marshal_cleanup(t379_marshaled& marshaled);
