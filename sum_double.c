#include <iostream>



double Sum(double, double);

int main()
  {
    using namespace std;
    double a, b, c;
  
    a = 1.3;
    b = 3.5;
    c = Sum(a,b);
    return 0;
  }

double Sum(double x, double y)
 {
 return x+y;
 }
