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

extern "C" void t772_marshal(const t772& unmarshaled, t772_marshaled& marshaled);
extern "C" void t772_marshal_back(const t772_marshaled& marshaled, t772& unmarshaled);
extern "C" void t772_marshal_cleanup(t772_marshaled& marshaled);
