#include <iostream>
using namespace std;
main()
{
  float a,b,c,sum;
  cout <<"Enter first value ";
  cin >> a; 
  cout <<"Enter second value ";
  cin >> b; 
  cout <<"Enter third value ";
  cin >> c; 
  sum = a+b+c;
  if(sum==180)
  {
    cout <<"Valid Triangle";
  }
  else
  {
    cout <<"Invalid Triangle";
  }
}