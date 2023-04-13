#include <iostream>
using namespace std;
bool pythagorean();
main()
{
   int result;
   result=pythagorean();
   cout <<result;
}
bool pythagorean()
{
   int a,b,c;
   cout <<"Enter first value ";
   cin >> a;
   cout <<"Enter second value ";
   cin >> b;
   cout <<"Enter third value ";
   cin >> c;
   if(a > b && a > c)
   {
     a=a*a;
     b=b*b;
     c=c*c;
     if(a==b+c)
     {  
        return 1;
     }
     else
     {
        return 0;
     }
   }
   else if(b > a && b > c)
   {
     a=a*a;
     b=b*b;
     c=c*c;
     if(b==a+c)
     {  
        return 1;
     }
     else
     {
        return 0;
     }
   }
   else if(c > a && c > b)
   {
     a=a*a;
     b=b*b;
     c=c*c;
     if(c==a+b)
     {  
        return 1;
     }
     else
     {
        return 0;
     }
   }
   else
   {
     return 0;
   }
}