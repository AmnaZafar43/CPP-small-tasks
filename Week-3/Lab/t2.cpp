#include <iostream>
using namespace std;
string collatz1(int n1,int n2);

main()
{
  string result;
  int num1,num2;
  cout <<"Enter number one ";
  cin >> num1;
  cout <<"Enter number two ";
  cin >> num2;
result=collatz1(num1,num2);
cout<<result;
}
 
string collatz1(int n1,int n2)
{
  int count1=0,count2=0;
   while(n1!=1)
   {
     if(n1 % 2==0)
     {
       n1=n1/2;
       count1++;
     }
     else
     {
      n1=(n1*3)+1;
      count1++;
     }
   }
 while(n2!=1)
   {
     if(n2 % 2==0)
     {
       n2=n2/2;
       count2++;
     }
     else
     {
      n2=(n2*3)+1;
      count2++;
     }
   }
	if(count1>count2)
{
  return "B";

}
else
{
  return "A";
}    
}