#pragma once

#include "iostream"

namespace Coffee {
#ifdef COFFEE_DEBUG
#define COFFEE_PRINT(msg)                                                      \
  do {                                                                         \
    std::cout << "Log:: " << msg << '\n';                                      \
  } while (0);
#else
#define COFFEE_PRINT(msg)
#endif
} // namespace Coffee
