#include <iostream>
using namespace std;
string trunctable(int n);
main()
{
  int n;
  string result;
  cout <<"Enter a number ";
  cin >> n;
  result=trunctable(n); 
  cout <<result;
}
string trunctable(int n)
{
   int a,i,c;
   string b,d;
   int count=0;
   for(i=2;i<n;i++)
   {
     a=n % i;
     c=n/i;
     if(a!=0)
     {
       b="Prime";
       return b;
     }
     else if(c!=0)
     {
       b="Right prime";
       return b;
     }
     else
     {
       b="None";
       return b;
     }
   }
   d="wrong";
  return d;
}
