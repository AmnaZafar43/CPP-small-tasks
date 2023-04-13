#include <iostream>
using namespace std;
string leap();
main()
{
  string result;
  result=leap();
  cout <<result;
}
string leap()
{
  int year;
  string a;
  cout <<"Enter year ";
  cin >> year;
  if(year % 4==0 && year % 100==0 && year % 400==0)
  {
    a="true";
    return a;
  }
  else if(year % 4==0 && year%100!=0)
  {
    a="true";
    return a;
  }
  else if(year % 4!=0)
  {
    a="false";
    return a;
  }
  else if(year % 4==0 && year % 100==0 && year % 400!=0)
  {
    a="false";
    return a;
  }
  else
  {
    cout <<"Enter valid year ";
  }
 return 0;
}
  