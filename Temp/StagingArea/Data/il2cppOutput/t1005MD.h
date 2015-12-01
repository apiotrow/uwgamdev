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

struct t31;

#include "codegen/il2cpp-codegen.h"
#include "t1005.h"

extern "C" void m5191 (t1005 * __this, t31* p0, t31* p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t1005_marshal(const t1005& unmarshaled, t1005_marshaled& marshaled);
extern "C" void t1005_marshal_back(const t1005_marshaled& marshaled, t1005& unmarshaled);
extern "C" void t1005_marshal_cleanup(t1005_marshaled& marshaled);
