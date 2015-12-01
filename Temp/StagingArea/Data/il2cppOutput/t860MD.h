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
#include "t860.h"
#include "t861.h"

extern "C" void m4311 (t860 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m4312 (t860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m4313 (t860 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m4314 (t860 * __this, t10* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t10* m4315 (t2 * __this , int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t860_marshal(const t860& unmarshaled, t860_marshaled& marshaled);
extern "C" void t860_marshal_back(const t860_marshaled& marshaled, t860& unmarshaled);
extern "C" void t860_marshal_cleanup(t860_marshaled& marshaled);
