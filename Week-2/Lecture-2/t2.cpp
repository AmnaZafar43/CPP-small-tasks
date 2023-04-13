#include <iostream>
using namespace std;
bool board();
main()
{
   
   board();
   
}
bool board()
{
  char x;
  int y;
  cout <<"Enter the x coordinate of board ";
  cin >> x;
  cout <<"Enter the y coordinate of board ";
  cin >> y;
  if(x=='A')
  {
    if(y%2==0)
    {
       cout <<"Black";
    }
    else
    {
      cout <<"White";
    }
  }
  else if(x=='B')
  {
    if(y%2==0)
    {
      cout <<"White";
    }
    else
    {
      cout <<"Black";
    }
  }
  else if(x=='C')
  {
    if(y%2==0)
    {
      cout <<"Black";
    }
    else
    {
     cout <<"White";
    }
  }
  else if(x=='D')
  {
    if(y%2==0)
    {
      cout <<"White";
    }
    else
    {
      cout <<"Black";
    }
  }
  else if(x=='E')
  {
    if(y%2==0)
    {
      cout <<"Black";
    }
    else
    {
     cout <<"White";
    }
  }
  else if(x=='F')
  {
    if(y%2==0)
    {
     cout <<"White";
    }
    else
    {
    cout <<"Black";
    }
  }
  else if(x=='G')
  {
    if(y%2==0)
   {
     cout <<"Black";
   }
   else
   {
     cout <<"White";
   }
  }
  else
  {
    if(y%2==0)
    {
      cout <<"White";
    }
    else
    {
      cout <<"Black";
    }
  }
  return 0;
}