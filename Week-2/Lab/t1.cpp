#include <iostream>
using namespace std;
float units();
main()
{
  float result;
  result=units();
  cout <<result;
}
float units()
{
  string unit;
  float l,w,h,v,a;
  cout <<"Enter length in meters ";
  cin >> l;
  cout <<"Enter width in meters ";
  cin >> w;
  cout <<"Enter height in meters ";
  cin >> h;
  cout <<"Enter unit in which you want to see the answer ";
  cin >> unit;
  if(unit=="centimeter" || unit=="cm" || unit=="centimeters")
  {
    v=(l*w*h)/3.0;
    a=v*1000000;
    return a;
  }
  else if(unit=="kilometer" || unit=="km" || unit=="kilometers")
  {
    v=(l*w*h)/3.0;
    a=v/1000000000.0;
    return a;
  }
  else if(unit=="millimeter" || unit=="mm" || unit=="millimeters")
  {
    v=(l*w*h)/3.0;
    a=v*1000000000;
    return a;
  }
  else
  {
   cout <<"Try Again";
  }
  return 0;
}
