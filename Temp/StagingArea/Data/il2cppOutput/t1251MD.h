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

struct t10;

#include "codegen/il2cpp-codegen.h"
#include "t1251.h"

extern "C" void m7765 (t1251 * __this, t10* p0, int64_t p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t1251_marshal(const t1251& unmarshaled, t1251_marshaled& marshaled);
extern "C" void t1251_marshal_back(const t1251_marshaled& marshaled, t1251& unmarshaled);
extern "C" void t1251_marshal_cleanup(t1251_marshaled& marshaled);
