#include <iostream>
using namespace std;
int loon();
main()
{
   int result;
   result=loon();
   cout <<result;
}
int loon()
{
  int n,a,count=0;
  cout <<"Enter a number ";
  cin >> n;
  while(n!=0)
  {
    n=n/10;
    a=n%10;
    if(a==1)
    {
      count++;
    }
    if(count>2)
    {
       count=0;
    }
  }
   return count;
} 