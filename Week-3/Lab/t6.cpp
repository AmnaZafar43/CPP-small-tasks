#include <iostream>
using namespace std;
void special();
main()
{
    special();

}
void special()
{
   int n,a;
   cout <<"Enter a number ";
   cin >> n;
   for(int i=1111;i<=9999;i++)
   {
     a=n%10;
     if(a==0)
     {
        cout <<a <<" " ;
     }
   }
}