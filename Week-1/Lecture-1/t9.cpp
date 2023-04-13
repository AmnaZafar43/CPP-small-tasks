#include <iostream>
using namespace std;
main()
{
  int a,b,sum,sub,mul,div,mod;
  cout <<"Enter first number ";
  cin >> a;
  cout <<"Eenter second number ";
  cin >> b;
  sum = a+b;
  sub = a-b;
  mul = a*b;
  div = a/b;
  mod = a%b;
  cout <<"Sum is <<sum <<endl;
  cout <<"Subtraction is <<sub <<endl;
  cout <<"Multiplication is <<mul <<endl;
  cout <<"Division is <<div <<endl;
  cout <<"Modulus is <<mod <<endl;
}