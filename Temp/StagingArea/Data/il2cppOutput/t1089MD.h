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


#include "codegen/il2cpp-codegen.h"

extern "C" void t1089_marshal(const t1089& unmarshaled, t1089_marshaled& marshaled);
extern "C" void t1089_marshal_back(const t1089_marshaled& marshaled, t1089& unmarshaled);
extern "C" void t1089_marshal_cleanup(t1089_marshaled& marshaled);
