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
#include "t927.h"
#include "t928.h"

extern "C" void m4713 (t927 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m4714 (t927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m4715 (t927 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m4716 (t927 * __this, t31* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t31* m4717 (t21 * __this , int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t927_marshal(const t927& unmarshaled, t927_marshaled& marshaled);
extern "C" void t927_marshal_back(const t927_marshaled& marshaled, t927& unmarshaled);
extern "C" void t927_marshal_cleanup(t927_marshaled& marshaled);
