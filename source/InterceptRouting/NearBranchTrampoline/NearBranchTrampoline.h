#pragma once

#include "dobby/dobby_internal.h"

#include "InterceptRouting/RoutingPlugin.h"

class NearBranchTrampolinePlugin : public RoutingPluginInterface {};


inline bool& get_near_trampoline_state() {
  static bool g_enable_near_trampoline = false;
  return g_enable_near_trampoline;
}

PUBLIC extern "C" inline void dobby_set_near_trampoline(bool enable) {
  get_near_trampoline_state() = enable;
}

inline bool is_near_trampoline_enabled() {
    return get_near_trampoline_state();
}
