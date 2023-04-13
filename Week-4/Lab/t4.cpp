#include<iostream>
using namespace std;
void price();
main()
{
 price();
}
void price()
{
  int frog[5];
  int count=0;
  for(int i=0;i<=4;i++)
  {
    cin >> frog[i];
  }
  for(int i=0;i<=4;i++)
  {
    if(frog[i]==1)
    {
      count++;
    }
    else if(frog[i]==0)
    {
      cout <<"No chance";
      break;
    }
  }
   cout<<count;
}
