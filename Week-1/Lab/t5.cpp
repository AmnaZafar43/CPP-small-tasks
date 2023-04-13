#include <iostream>
using namespace std;
main()
{
  int area,nvegetables,pvegetable,p1vegetable,sellprice,seed,plantation,fertilization,labor,cost,price;
  int a,a1,pr,pr1,pr2,pr3,pr4,pr5,pr6,pr7,pr8,pr9,pr10,pr11,pr12,pr13,pr14,total;
  cout <<"Enter no of vegetables you want to grow ";
  cin >> nvegetables;
  if(nvegetables== 1)
  {
  cout <<"Enter total area of farm in acres ";
  cin >> area;
  cout <<"Enter selling price of vegetable per acre ";
  cin >> sellprice;
  cout <<"Enter seed cost ";
  cin >> seed;
  cout <<"Enter plantation cost ";
  cin >> plantation;
  cout <<"Enter labour cost ";
  cin >> labor;
  cout <<"Enter fertilization cost ";
  cin >> fertilization;
    pr=(seed+plantation+labor+fertilization)*area;
    pr1=sellprice*area;
    price = pr1-pr;
    cout <<"Revenue is " <<price <<endl;
    if(pr1>pr)
    {
      cout <<"Profit";
    }
    else
    {
      cout <<"Loss";
    }
   }
   if(nvegetables==2)
   {
  cout <<"Enter total area of farm in acres ";
  cin >> area;
  cout <<"Enter percentage of first vegetable ";
  cin >> pvegetable;
   cout <<"Enter percentage of second vegetable ";
  cin >> p1vegetable;
  cout <<"Enter selling price of vegetable per acre ";
  cin >> sellprice;
  cout <<"Enter seed cost ";
  cin >> seed;
  cout <<"Enter plantation cost ";
  cin >> plantation;
  cout <<"Enter labour cost ";
  cin >> labor;
  cout <<"Enter fertilization cost ";
  cin >> fertilization;
     a=pvegetable/(area*100);
     pr = seed*a/100;
     pr1= plantation*a/100;
     pr2= fertilization*a/100;
     pr3= labor*a/100;
     pr4= pr+pr1+pr2+pr3;
     pr5=sellprice*a/100;
     pr6=pr5-pr4;
     
     a1=p1vegetable/(area*100);
     pr7 = seed*a1/100;
     pr8= plantation*a1/100;
     pr9= fertilization*a1/100;
     pr10= labor*a1/100;
     pr11= pr7+pr8+pr9+pr10;
     pr12=sellprice*a1/100;
     pr13=pr12-pr11;
     total=pr13+pr6;
     cout <<"Reveneu is " <<total;
     if(pr12>pr11)
     {
       cout <<"Profit";
     }
     else
     {
       cout <<"Loss";
     }
   }
}