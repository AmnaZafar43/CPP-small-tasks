#include<iostream>
using namespace std;
void hangman();
main()
{
    hangman();
}
void hangman()
{
  string w1,w2,g1,p1,p2;
  cout <<"Enter player one name ";
  cin >> p1;
  cout <<"Enter player two name ";
  cin >> p2;
  cout <<"Enter a word ";
  cin >> w1;
  cout <<"Enter the guessed word ";
  cin >> g1;
  system("cls");
  cout <<p2 <<"'s turn" <<endl;
  cout <<"Guessed word is " <<g1 <<endl;
  cout <<"Enter word ";
  cin >> w2;
  system("cls");
  if(w1==w2)
  {
    cout <<" YOU WIN " ;
  }
  else
  {
   cout <<" YOU LOSE " <<endl;
   cout <<endl;
   cout <<"****************************************" <<endl;
   cout <<"                   * " <<endl;
   cout <<"                   * " <<endl;
   cout <<"                  *** " <<endl;
   cout <<"                 *   * " <<endl;
   cout <<"                  *** " <<endl;
   cout <<"                  ***  " <<endl;                 
   cout <<"                *  *  * " <<endl;
   cout <<"              *    *    * " <<endl;
   cout <<"            *      *      * " <<endl;
   cout <<"                   *          " <<endl;
   cout <<"                   *          " <<endl;
   cout <<"                 *   *        " <<endl;
   cout <<"                *     *       " <<endl;            
   cout <<"              *         *     " <<endl;                  
   cout <<"            *             *   " <<endl;
   cout <<"          *                 * " <<endl;
  }
}
  
  