#include <iostream>
using namespace std;
int bonus();
main()
{
   int result;
   result=bonus();
   cout <<result;
}
int bonus()
{
   int days,b;
   cout <<"Enter billable days ";
   cin >> days;
   if(days<0)
   {
     cout <<"Invalid input";
   }
   else if( days>0 && days<=32)
   {
     b=32*0;
     return b;
   }
   else if( days>32 && days <40)
   {
     b= (32*0)+((days-32)*325);
     return b;
   }
   else if( days >40 && days<48)
   {
     b= (32*0)+(8*325)+((days-32-8)*550);
     return b;
   }
   else
   {
     b= (32*0)+(8*325)+(8*550)+((days-32-8-8)*600);
     return b;
   }
  return 0;
}