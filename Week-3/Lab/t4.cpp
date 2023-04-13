#include <iostream>
using namespace std;
bool prime();
int nextprime(int n);
main()
{
  int result,n;
  cout <<"Enter a number ";
  cin >> n;
  result=nextprime(n);
  cout <<result;
}
bool prime(int num1)
{
  int a;
  for(int i=2;i<=num1;i++)
  {
    a=num1 % i;
    if(a!=0)
    {
      return 1;
    }
    else 
    {
       return 0;
    }
  }
 return 0;
}
int nextprime()
{
    int a;
   a=prime();
  if(a==1)
  {
    return a;
  }
  else
  {
    for(int i=2;i<=a ;i++)
    {
      a++;
      a=a%i;
      if(a!=0)
      {
        return a;
      }
      else
      {
         return 0;
      }
     }
  }
  return 0;
} 
    