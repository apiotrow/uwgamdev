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

extern "C" void t429_marshal(const t429& unmarshaled, t429_marshaled& marshaled);
extern "C" void t429_marshal_back(const t429_marshaled& marshaled, t429& unmarshaled);
extern "C" void t429_marshal_cleanup(t429_marshaled& marshaled);
