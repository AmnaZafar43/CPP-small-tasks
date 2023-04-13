#include <iostream>
using namespace std;
void primorial();
main()
{
   primorial();
   //cout <<result;
}
void primorial()
{
   int n,a,b,c;
   cout <<"Enter a number ";
   cin >> n;
   for(int i=2;i<n;i++)
   {
     a=n%i;
     if(a!=0)
     {
       b=a;
     }
    c=a*a;
   }
   cout <<c <<" ";
}
