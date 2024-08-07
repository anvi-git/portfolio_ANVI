#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
 cout << setiosflags(ios::scientific) << setprecision(14) << endl;
 
  cout << " -------------------  " << endl;
  cout << " -------------------  " << endl; 
  
 double s=13.;
 double x=3;
 
 cout << " scegli un numero : " << endl; //l'utente sceglie il numero di cui estrarre la radice
 cin >> s;
 cout << " indovina la soluzione : " << endl; // l'utente sceglie un guess per la soluzione della radice
 cin >> x;
 cout << " -------------------  " << endl;
 cout << " -------------------  " << endl;
 
 
 double epsilon; //epsilon è l'errore 
  
  
  /* eseguo il ciclo for */ 
  
  for(int n=1; n<6; n++)
    {
     double xnf=x;
     x = 0.5*(x + s/x);
     epsilon = xnf - x; 
     
       cout << " ------------------- " << endl;
       cout << " x alla " << n << " è : " << x << endl;
       cout << " iterazione # " << n << " ;  x = " << xnf << "; ||||  err = " << fabs(epsilon) << endl;
    }
  
  
 cout << " ------------------- " << endl;
 cout << " ------------------- " << endl; 
  
       double sqrts;
       sqrts = pow(s, 0.5); 
       cout << " il valore corretto della radice di " << s << " è: " << sqrts << endl; 
  
 cout << " ------------------- " << endl;
 cout << " ------------------- " << endl;
 
 return 0;
 }





/* tol = 1.3e-14;
  err=1.0
e poi ciclo while con (err > tol) */
