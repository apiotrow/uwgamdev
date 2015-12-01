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

extern "C" void t466_marshal(const t466& unmarshaled, t466_marshaled& marshaled);
extern "C" void t466_marshal_back(const t466_marshaled& marshaled, t466& unmarshaled);
extern "C" void t466_marshal_cleanup(t466_marshaled& marshaled);
