// this is a simple program to print the precision of the machine 
#include <iostream>

using namespace std;

int main()
{
  double n = 1.0; 
  double eps = 1; // that is espilon
  int c = 10; // the "pace" //
  
// start of do_while loop //

  do
  {
   e /= c;
  }
  while ( n + e > n);

// end of do_while loop //

//now print the machine precision //
    
  cout << " precision " << e << endl;
  
return 0;
}

