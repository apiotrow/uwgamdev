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

struct t402;
struct t402_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2319 (t402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2320 (t402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2321 (t402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t402_marshal(const t402& unmarshaled, t402_marshaled& marshaled);
extern "C" void t402_marshal_back(const t402_marshaled& marshaled, t402& unmarshaled);
extern "C" void t402_marshal_cleanup(t402_marshaled& marshaled);
