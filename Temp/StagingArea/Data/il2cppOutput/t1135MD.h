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

extern "C" void t1135_marshal(const t1135& unmarshaled, t1135_marshaled& marshaled);
extern "C" void t1135_marshal_back(const t1135_marshaled& marshaled, t1135& unmarshaled);
extern "C" void t1135_marshal_cleanup(t1135_marshaled& marshaled);
