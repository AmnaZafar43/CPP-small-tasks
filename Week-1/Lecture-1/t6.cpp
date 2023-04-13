#include <iostream>
using namespace std;
main()
{
  int hour,min,m;
  cout <<"Enter no of minutes ";
  cin >> m;
  hour = m/60;
  min = m%60;
  cout <<hour <<"hours" <<min <<"minutes";
}