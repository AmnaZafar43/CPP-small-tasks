#include <iostream>
using namespace std;
int equal();
main()
{
   int result;
   result=equal();
   cout <<result;
}
int equal()
{
   int a,b,c;
   cout <<"Enter first value ";
   cin >> a;
   cout <<"Enter second value ";
   cin >> b;
   cout <<"Enter third value ";
   cin >> c;
   if(a==b && b==c && a==c)
   {
      return 3;
   }
   else if(a==b || b==c ||a==c)
   {
      return 2;
   }
   else
   {
      return 0;
   }
} 