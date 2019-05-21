#include "profile.h"
#include <cmath>

const double Profile::GetTime() {
  bool max_v = true;
  double total_time;
  double t1;
  double d1;
  double d2; 

  if (max_v == false){ 
    total_time = ((std::sqrt(2))/kMaxAcceleration);
    return total_time;
  }
  else {
    t1 = (kMaxVelocity/kMaxAcceleration);
    d1 = (0.5 * kMaxVelocity * t1);
    d2 = 1 - (2 * d1);
    total_time = (2*(t1/kMaxAcceleration)) + (d2/kMaxVelocity); 
    return total_time;
    
  }
}
