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

extern "C" void t614_marshal(const t614& unmarshaled, t614_marshaled& marshaled);
extern "C" void t614_marshal_back(const t614_marshaled& marshaled, t614& unmarshaled);
extern "C" void t614_marshal_cleanup(t614_marshaled& marshaled);
