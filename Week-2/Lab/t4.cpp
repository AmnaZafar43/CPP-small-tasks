#include <iostream>
using namespace std;
void years();
main()
{
  years();
}
void years()
{
  int human,cat,dog;
  int year;
  cout <<"Enter year ";
  cin >> year;
  if(year==1)
  {
    human=year;
    cat=15;
    dog=15;
    cout <<"Human years " << human <<endl;
    cout <<"Cat years " << cat <<endl;
    cout <<"Dog years " <<dog;
  }
  else if(year==2)
  {
    human=year;
    cat=15+9;
    dog=15+9;
    cout <<"Human years " << human <<endl;
    cout <<"Cat years " << cat <<endl;
    cout <<"Dog years " <<dog;
  }
  else if( year >2)
  {
    human=year;
    cat=15+9+(4*(year-2));
    dog=15+9+(5*(year-2));
    cout <<"Human years " << human <<endl;
    cout <<"Cat years " << cat <<endl;
    cout <<"Dog years " <<dog;
  }
  else
  {
   cout <<"Enter valid year";
  }
}
