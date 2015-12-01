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

extern "C" void t1200_marshal(const t1200& unmarshaled, t1200_marshaled& marshaled);
extern "C" void t1200_marshal_back(const t1200_marshaled& marshaled, t1200& unmarshaled);
extern "C" void t1200_marshal_cleanup(t1200_marshaled& marshaled);
