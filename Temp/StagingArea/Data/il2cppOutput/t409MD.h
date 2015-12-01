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

struct t409;
struct t409_marshaled;
struct t10;
struct t317;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2096 (t409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2097 (t2 * __this , t409 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t409 * m2098 (t2 * __this , t10* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t409 * m2099 (t2 * __this , t317 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t409 * m2100 (t2 * __this , t317 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t409_marshal(const t409& unmarshaled, t409_marshaled& marshaled);
extern "C" void t409_marshal_back(const t409_marshaled& marshaled, t409& unmarshaled);
extern "C" void t409_marshal_cleanup(t409_marshaled& marshaled);
