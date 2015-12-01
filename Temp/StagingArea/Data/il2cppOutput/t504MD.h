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

extern "C" void t504_marshal(const t504& unmarshaled, t504_marshaled& marshaled);
extern "C" void t504_marshal_back(const t504_marshaled& marshaled, t504& unmarshaled);
extern "C" void t504_marshal_cleanup(t504_marshaled& marshaled);
