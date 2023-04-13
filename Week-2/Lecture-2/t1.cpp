#include <iostream>
using namespace std;
float valid();
main()
{
   
   valid();
   
}
float valid()
{
  string name;
  float price;
  cout <<"Enter product name ";
  cin >> name;
  cout <<"Enter product price ";
  cin >> price;
  if(price >= 0)
  {
    cout <<"The price of " << name <<" " <<"is valid";
  }
  else
  {
    cout <<"The price of " <<name <<" " <<"is invalid";
  }
  return 0;
}