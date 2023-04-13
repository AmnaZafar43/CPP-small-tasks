#include<iostream>
using namespace std;
bool dominant();
main()
{
  bool r;
  r=dominant();
  cout<<r;
}
bool dominant()
{
  int size,count=0;
  cout <<"Enter size of array ";
  cin >> size;
  int arr[size];
  cout<<"Enter array ";
  for(int i=0;i<size;i++)
  {
    cin >> arr[i];
  }
  for(int i=0;i<size;i++)
  {
    if(arr[i]>0)
    {
      if(arr[i]!=arr[i+1])
      {
         return 1;
      }
      else
      {
          return 0;
      }
    }
  }
 return 0;
} 