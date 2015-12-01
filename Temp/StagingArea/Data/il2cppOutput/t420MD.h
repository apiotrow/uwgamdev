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

struct t420;
struct t420_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2149 (t420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2150 (t420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2151 (t420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2152 (t420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t420_marshal(const t420& unmarshaled, t420_marshaled& marshaled);
extern "C" void t420_marshal_back(const t420_marshaled& marshaled, t420& unmarshaled);
extern "C" void t420_marshal_cleanup(t420_marshaled& marshaled);
