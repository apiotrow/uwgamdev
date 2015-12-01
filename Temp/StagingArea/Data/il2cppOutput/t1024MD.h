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

extern "C" void t1024_marshal(const t1024& unmarshaled, t1024_marshaled& marshaled);
extern "C" void t1024_marshal_back(const t1024_marshaled& marshaled, t1024& unmarshaled);
extern "C" void t1024_marshal_cleanup(t1024_marshaled& marshaled);
