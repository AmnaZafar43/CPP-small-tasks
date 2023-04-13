#include<iostream>
using namespace std;
void discount();
main()
{
  discount();

}
void discount()
{
  float dis,total;
  string movies[5]={"Gladiator","Starwars","Terminator","Takinglives","Tombrider"};
  string m;
  cout <<"Enter movie name ";
  cin >> m;
  if(m=="Gladiator" || m=="gladiator" || m=="Terminator" || m=="terminator" || m=="Tombrider"|| m=="tombrider")
  {
    dis=500*(5/100.0);
    total=500-dis;
    cout <<"Discount on price is " <<dis <<endl;
    cout <<"Price after discount is " <<total;
  }
  else
  {
    dis=500*(10/100.0);
    total=500-dis;
    cout <<"Discount on price is " <<dis <<endl;
    cout <<"Price after discount is " <<total;
  }
}