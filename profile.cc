#include "profile.h"
#include <cmath>

const double Profile::GetTime() {
  double total_time;
  total_time = ((std::sqrt(2))/kMaxAcceleration);
  return total_time;
}
