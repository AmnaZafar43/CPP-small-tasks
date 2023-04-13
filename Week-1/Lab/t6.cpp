#include <iostream>
using namespace std;
main()
{
  int cost,book,days,tax,rent_of_rooms,a,b;
  float discount,discount1,p_rent_of_rooms;
  cout <<"Enter cost of one room ";
  cin >> cost;
  cout <<"Enter no of rooms booked ";
  cin >> book;
  cout <<"Enter no of days that rooms are booked ";
  cin >> days;
  cout <<"Enter sales tax as percent ";
  cin >> tax;
  rent_of_rooms= cost*book;
  p_rent_of_rooms= (cost*5)/100;
  if(days>=3)
  {
    discount= (cost*5)/100;
  }
  if(book <=10)
  {
    discount1= (cost*10)/100;
    cout <<"Discount in percentage is " <<discount1 <<endl;
  }
  if(book>10 && book <=20)
  {
    discount1= (cost*20)/100;
    cout <<"Discount in percentage is " <<discount1 <<endl;
  }
  if(book >20 && book <=30)
  {
    discount1= (cost*30)/100;
    cout <<"Discount in percentage is " <<discount1 <<endl;
  }
  a=discount-discount1;
  b=cost+a+p_rent_of_rooms;
  cout <<"Cost of one room is " <<cost <<endl;
  cout <<"Discount on each room as percent is " <<discount1 <<endl;
  cout <<"Number of booked rooms are " <<book <<endl;
  cout <<"Number of days the room is booked are " <<days <<endl;
  cout <<"Total cost of room are " <<rent_of_rooms <<endl;
  cout <<"Sales tax is " <<tax <<endl;
  cout <<"Total billing amount is " <<b;
}