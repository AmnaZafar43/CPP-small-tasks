#include <iostream>
using namespace std;
bool minisoduku();
main()
{
   bool result;
   result=minisoduku();
   cout <<result;
}
bool minisoduku()
{
    int arr[3][3];
    int count=0;
    cout <<"Enter array ";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(arr[i][j]!=arr[i][j+1])
           {
               return 1;
           }
           if(arr[i][j]==arr[i][j+1])
           {
               return 0;
           }
        }
    }

    return 0;
}