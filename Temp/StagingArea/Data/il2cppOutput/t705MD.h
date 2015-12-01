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

extern "C" void t705_marshal(const t705& unmarshaled, t705_marshaled& marshaled);
extern "C" void t705_marshal_back(const t705_marshaled& marshaled, t705& unmarshaled);
extern "C" void t705_marshal_cleanup(t705_marshaled& marshaled);
