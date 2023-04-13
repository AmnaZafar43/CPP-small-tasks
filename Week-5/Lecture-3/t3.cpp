#include<iostream>
using namespace std;
string interview();
main()
{
   string result;
   result=interview();
   cout<<result;
}
string interview()
{
  int size,total,sum=0,a;
  cout <<"Enter size of array ";
  cin >> size;
  cout <<"Enter total time ";
  cin >> total;
  int arr[size];
  cout<<"Enter array ";
  for(int i=0;i<size;i++)
  {
    cin >> arr[i];
  }
  if(arr[size]<8)
  {
    return "disqualified";
  }
  for(int i=0;i<size;i++)
  {
    if(arr[i]==arr[i+1])
    {
      sum=sum+arr[i];
    }
    else
    {
      return "disqualified";
    }
  }
   a=total-sum;
   if(a<=total || a==0)
   {
    return "qualified";
   }
  return "a";
}