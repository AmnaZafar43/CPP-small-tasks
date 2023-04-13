#include <iostream>
using namespace std;
main()
{
    int array[4];
    int two_array[2][2]={{1,2},{3,4}};
    int size=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
           array[size]=two_array[i][j];
           size++;
        }
    }
    cout <<"[";
    for(int i=0;i<size;i++)
    {
        cout <<array[i] <<" ";
    }
    cout <<"]";
}