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

extern "C" void t545_marshal(const t545& unmarshaled, t545_marshaled& marshaled);
extern "C" void t545_marshal_back(const t545_marshaled& marshaled, t545& unmarshaled);
extern "C" void t545_marshal_cleanup(t545_marshaled& marshaled);
