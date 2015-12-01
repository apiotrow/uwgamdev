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

struct t442;
struct t442_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2489 (t442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2490 (t442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2491 (t442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t442_marshal(const t442& unmarshaled, t442_marshaled& marshaled);
extern "C" void t442_marshal_back(const t442_marshaled& marshaled, t442& unmarshaled);
extern "C" void t442_marshal_cleanup(t442_marshaled& marshaled);
