#include <iostream>
using namespace std;
int fibonacci();
main()
{
  int result;
  result=fibonacci();
  cout <<"   " <<result;
}
int fibonacci()
{
  int n;
  int sum=0;
  cout <<"Enter a number ";
  cin >> n;
  for(int i=1;i<=n;i++)
  {
    sum=sum+i;
  }
   return sum;
}   