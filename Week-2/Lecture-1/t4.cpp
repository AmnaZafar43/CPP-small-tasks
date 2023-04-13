#include <iostream>
#include <cmath>
using namespace std;
float roots();
main()
{
   roots();
}
float roots()
{
   float a,b,c,dis,x1,s,x2;
   cout <<"Enter first value ";
   cin >> a;
   cout <<"Enter second value ";
   cin >> b;
   cout <<"Enter third value ";
   cin >> c;
   dis=(b*b)-4*a*c;
   if(dis>0)
   {
     b=b*b;
     a=b-4*a*c;
     s=sqrt(a);
     x1=(-b+s)/(2*a);
     x2=(-b-s)/(2*a);
     cout <<"Roots are real and different" <<endl;
     cout <<"Value of x one is " <<x1 <<endl;
     cout <<"Value of x two is " <<x2;
   }
   else if(dis==0)
   {
     x1=-b/2.0*a;
     x2=-b/2.0*a;
     cout <<"Roots are real and equal" <<endl;
     cout <<"Value of x one is " <<x1 <<endl;
     cout <<"Value of x two is " <<x2;
   }
   else
   {
     s=sqrt(b*b-4*a*c);
     x1=(-b/2*a)+(-b+s/2.0*a);
     x2=(-b/2*a)-(-b-s/2.0*a);
     cout <<"Roots are complex are and different" <<endl;
     cout <<"Value of x one is " <<x1 <<endl;
     cout <<"Value of x two is " <<x2;
   }
  return 0;
}     