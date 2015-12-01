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

struct t465;
struct t465_marshaled;
struct t2;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m2748 (t465 * __this, t2 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m2749 (t465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2750 (t2 * __this , t465 * p0, t465 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t465_marshal(const t465& unmarshaled, t465_marshaled& marshaled);
extern "C" void t465_marshal_back(const t465_marshaled& marshaled, t465& unmarshaled);
extern "C" void t465_marshal_cleanup(t465_marshaled& marshaled);
