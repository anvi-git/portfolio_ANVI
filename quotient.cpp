// this program allows to compute the division between two numbers, a and b, that the program asks the user to insert.
#include <iostream>

int quotient(int, int, int&, int&);

int main()
  { 
    using namespace std;
    int a, b;
    int q, r;
    
    cout << "insert numerator ";
    cin >> a;
    cout << "insert denominator ";
    cin >> b;
    
     
    if(quotient(a,b,q,r)==0)
    {
      cout << a << "/" << b << "=" << q << " ; remainder " << r << endl;
    } 
    else
      cout << "error: division by zero impossible" << endl;
      
    return 0;
  }
int quotient(int a, int b, int& q, int& r)
  {
     if(b==0) return 1;
     q = a/b;
     r = a%b;
     return 0;
  }
