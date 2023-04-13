#include<iostream>
using namespace std;
int missing();
main()
{
   int result;
   result=missing();
   cout<<result;
}
int missing()
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
    for(int j=i+1;j<size;j++)
    {
       if(arr[i]>arr[j])
       {
         int temp=arr[i];
         arr[j]=arr[i];
         arr[j]=temp;
       }
     }
   }
  for(int i=0;i<size;i++)
  {
  while(arr[0]!=arr[1])
  {
    arr[0]++;
    count=count+arr[0];
  }
}
 return count;
}