#include<iostream>
using namespace std;
int boomrange();
main()
{
  int result;
  result=boomrange();
  cout<<result;
}
int boomrange()
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
    if(arr[i]==arr[i+2])
    {
      if(arr[i]!=arr[i+1])
      {
         count++;
      }
    }
  }
 return count;
} 