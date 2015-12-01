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

struct t333;
struct t333_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m1633 (t333 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t333_marshal(const t333& unmarshaled, t333_marshaled& marshaled);
extern "C" void t333_marshal_back(const t333_marshaled& marshaled, t333& unmarshaled);
extern "C" void t333_marshal_cleanup(t333_marshaled& marshaled);
