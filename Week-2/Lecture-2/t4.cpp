#include <iostream>
using namespace std;
void chocolate();
main()
{   
   chocolate();  
}
void chocolate()
{
  int small,big,req,total,small_chocolate,big_chocolate,c;
  cout <<"Enter no of small chocolates ";
  cin >> small;
  cout <<"Enter no of big chocolates ";
  cin >> big;
  cout <<"Enter the desired no of grams ";
  cin >> req;
  small_chocolate = small*2;
  big_chocolate = big*5;
  total= small_chocolate+big_chocolate;
  if(total==req)
  {
    c= small_chocolate - small;
    cout <<c;
    //cout <<"Required no of small chocolates is " << c <<" " <<"grams";
  }
  else
  {
    cout <<"-1";
  }
}