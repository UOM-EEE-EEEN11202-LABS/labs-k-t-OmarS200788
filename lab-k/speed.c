#include <math.h>

int main(void) {
  double t , a , s, u,v;
  s = 20.0;
  u = 0.0;
  a = 9.8;
  t = sqrt((2*s)/a);
  v = u + a*t;

  return 0 ;
}