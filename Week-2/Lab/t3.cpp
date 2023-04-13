#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int count = 0;
main()
{
  int result, year1, year2;
  cout << "Enter year one ";
  cin >> year1;
  cout << "Enter year two ";
  cin >> year2;
  result = c_leap(year1,year2);
  cout << result;
}
bool leap(int year)
{
  bool a;
  if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
  {
    a = true;
  }
  else if (year % 4 == 0 && year % 100 != 0)
  {
    a = true;
  }
  else
  {
    a = false;
  }
  return a;
}
int c_leap(int year1, int year2)
{
  int diff;
  bool a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
  diff = year2 - year1;
  if (diff == 10)
  {
    a1 = leap(year1);
    if (a1 == true)
    {
      count++;
    }
    year1 = year1 + 1;
    a2 = leap(year1);
    if (a2 == true)
    {
      count++;
    }
    year1 = year1 + 1;
    a3 = leap(year1);
    if (a3 == true)
    {
      count++;
    }
    year1 = year1 + 1;
    a4 = leap(year1);
    if (a4 == true)
    {
      count++;
    }
    year1 = year1 + 1;
    a5 = leap(year1);
    if (a5 == true)
    {
      count++;
    }
    year1 = year1 + 1;
    a6 = leap(year1);
    if (a6 == true)
    {
      count++;
    }
    year1 = year1 + 1;
    a7 = leap(year1);
    if (a7 == true)
    {
      count++;
    }
    year1 = year1 + 1;
    a8 = leap(year1);
    if (a8 == true)
    {
      count++;
    }
    year1 = year1 + 1;
    a9 = leap(year1);
    if (a9 == true)
    {
      count++;
    }
    year1 = year1 + 1;
    a10 = leap(year1);
    if (a10 == true)
    {
      count++;
    }
    else
    {
      count;
    }
  }
  return count;
}

