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

struct t447;
struct t447_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2616 (t447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t447_marshal(const t447& unmarshaled, t447_marshaled& marshaled);
extern "C" void t447_marshal_back(const t447_marshaled& marshaled, t447& unmarshaled);
extern "C" void t447_marshal_cleanup(t447_marshaled& marshaled);
