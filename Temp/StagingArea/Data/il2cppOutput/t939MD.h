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
#include "t939.h"

extern "C" void m4789 (t939 * __this, t10* p0, t10* p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t939_marshal(const t939& unmarshaled, t939_marshaled& marshaled);
extern "C" void t939_marshal_back(const t939_marshaled& marshaled, t939& unmarshaled);
extern "C" void t939_marshal_cleanup(t939_marshaled& marshaled);
