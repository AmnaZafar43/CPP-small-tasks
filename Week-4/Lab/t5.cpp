#include<iostream>
using namespace std;
void price();
main()
{
 price();
}
void price()
{
  string arr[3];
  string arr1[3];
  cout <<"Enter array one ";
  for(int i=0;i<=2;i++)
  {
    cin >> arr[i];
  }
  cout <<"Enter array two ";
  for(int i=0;i<=2;i++)
  {
    cin >> arr1[i];
  }
  if(arr[0]