#include <iostream>
using namespace std;
main()
{
  float a,a1,a2,a3,a4,b;
  string gender;
  float bodyw,wristm,waistm,hipm,foream,bodyfat,bodyfatp;
  cout <<"Enter yor gender ";
  cin >> gender;

  if(gender=="Women" || gender=="women")
  {
   cout <<"Enter body weight ";
   cin >> bodyw;
   cout <<"Enter wrist measurement at full point ";
   cin >> wristm;
   cout <<"Enter waist measurement at navel ";
   cin >> waistm;
   cout <<"Enter hip measurement at full point ";
   cin >> hipm;
   cout <<"Enter foream measurement at full point ";
   cin >> foream;
   a=(bodyw*0.732)+8.987;
   a1=wristm/3.140;
   a2=waistm*0.157;
   a3=hipm*0.249;
   a4=foream*0.434;
   b=a+a1-a2-a3+a4;
   bodyfat=bodyw-b;
   bodyfatp=(bodyfat/bodyw)*100;
   cout <<"Body-Fat is " <<bodyfat <<endl;
   cout <<"Percentage of Body Fat is " <<bodyfatp;
  }

  if(gender=="Men" || gender=="men")
  {
  cout <<"Enter body weight ";
  cin >> bodyw;
  cout <<"Enter wrist measurement at full point ";
  cin >> wristm;
  cout <<"Enter waist measurement at navel ";
  cin >> waistm;
  cout <<"Enter hip measurement at full point ";
  cin >> hipm;
  cout <<"Enter foream measurement at full point ";
  cin >> foream;
   a=(bodyw*1.082)+94.42;
   a1=wristm*4.15;
   b=a-a1;
   bodyfat=bodyw-b;
   bodyfatp=(bodyfat/bodyw)*100;
   cout <<"Body-Fat is " <<bodyfat <<endl;
   cout <<"Percentage of Body Fat is " <<bodyfatp;
  }
}
  

   
  