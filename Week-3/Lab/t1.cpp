#include <iostream>
using namespace std;
int collatz();
main()
{
  int result;
  result=collatz();
  cout <<result;
}
int collatz()
{
   int n,count=0;
   cout <<"Enter a number ";
   cin >> n;
   while(n!=1)
   {
     if(n % 2==0)
     {
       n=n/2;
       count++;
     }
     else
     {
      n=(n*3)+1;
      count++;
     }
   }
    return count;
}