#include <iostream>
using namespace std;
main()
{
  int a,b,c;
  cout <<"Enter value one ";
  cin >> a;
  cout <<"Enter value two ";
  cin >> b;
  cout <<"Enter value three ";
  cin >> c;
  if(a==b && b==c && a==c)
  {
    cout <<"Equilateral Triangle";
  }
  else if(a==b || a==c || b==c)
  {
    cout <<"Isoceles Triangle";
  }
  else
  {
    cout <<"Scalene Triangle";
  }
}