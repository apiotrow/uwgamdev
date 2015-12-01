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

extern "C" void t732_marshal(const t732& unmarshaled, t732_marshaled& marshaled);
extern "C" void t732_marshal_back(const t732_marshaled& marshaled, t732& unmarshaled);
extern "C" void t732_marshal_cleanup(t732_marshaled& marshaled);
