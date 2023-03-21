#include<iostream>
#include<ctime>
#include <cstdlib>
using namespace std;
int main()
{
  int guess,total; float dice1,dice2,bet,possibility,earned;
  srand(time(0));
  cout<<endl;
  cout<<"Guess the results between (2-12) :";
  cin>>guess;
  cout<<"Enter the amount to bet :";
  cin>>bet;
  cout<<endl;
  dice1=rand()%6+1;
  dice2=rand()%6+1;
  total=dice1+dice2;
  switch (guess)
  {
  case 2:  possibility=1;  break;
  case 3:  possibility=2;  break;
  case 4:  possibility=3;  break;
  case 5:  possibility=4;  break;
  case 6:  possibility=5;  break;
  case 7:  possibility=6;  break;
  case 8:  possibility=5;  break;
  case 9:  possibility=4;  break;
  case 10: possibility=3;  break;
  case 11: possibility=2;  break;
  case 12: possibility=1;  break;
  }
  cout << " For your $" << bet << " bet, the roll is" << endl;
cout << endl;
if (dice1 == 1)//drawing if the value of dice1 is 1
{
    cout << "=============" << endl;
    cout << "|           |" << endl;
    cout << "|     1     |" << endl;
    cout << "|           |" << endl;
    cout << "=============" << endl;
}
else if (dice1 == 2)//drawing if the value of dice1 is 2
{
    cout << "=============" << endl;
    cout << "| 2         |" << endl;
    cout << "|           |" << endl;
    cout << "|         2 |" << endl;
    cout << "=============" << endl;
}
else if (dice1 == 3)//drawing if the value of dice1 is 3
{
    cout << "=============" << endl;
    cout << "| 3         |" << endl;
    cout << "|     3     |" << endl;
    cout << "|         3 |" << endl;
    cout << "=============" << endl;
}
else if (dice1 == 4)//drawing if the value of dice1 is 4
{
    cout << "=============" << endl;
    cout << "| 4       4 |" << endl;
    cout << "|           |" << endl;
    cout << "| 4       4 |" << endl;
    cout << "=============" << endl;
}//else if
else if (dice1 == 5)//drawing if the value of dice1 is 5
{
    cout << "=============" << endl;
    cout << "| 5       5 |" << endl;
    cout << "|     5     |" << endl;
    cout << "| 5       5 |" << endl;
    cout << "=============" << endl;
}//else if
else if (dice1 == 6)//drawing if the value of dice1 is 6
{
    cout << "=============" << endl;
    cout << "| 6       6 |" << endl;
    cout << "| 6       6 |" << endl;
    cout << "| 6       6 |" << endl;
    cout << "=============" << endl;
}//else if

cout << endl;//blank line 

if (dice2 == 1)//drawing if the value of dice2 is 1
{
    cout << "=============" << endl;
    cout << "|           |" << endl;
    cout << "|     1     |" << endl;
    cout << "|           |" << endl;
    cout << "=============" << endl;
}//if
else if (dice2 == 2)//drawing if the value of dice2 is 2
{
    cout << "=============" << endl;
    cout << "| 2         |" << endl;
    cout << "|           |" << endl;
    cout << "|         2 |" << endl;
    cout << "=============" << endl;
}//else if
else if (dice2 == 3)//drawing if the value of dice2 is 3
{
    cout << "=============" << endl;
    cout << "| 3         |" << endl;
    cout << "|     3     |" << endl;
    cout << "|         3 |" << endl;
    cout << "=============" << endl;
}//else if
else if (dice2 == 4)//drawing if the value of dice2 is 4
{
    cout << "=============" << endl;
    cout << "| 4       4 |" << endl;
    cout << "|           |" << endl;
    cout << "| 4       4 |" << endl;
    cout << "=============" << endl;
}//else if
else if (dice2 == 5)//drawing if the value of dice2 is 5
{
    cout << "=============" << endl;
    cout << "| 5       5 |" << endl;
    cout << "|     5     |" << endl;
    cout << "| 5       5 |" << endl;
    cout << "=============" << endl;
}//else if
else if (dice2 == 6)//drawing if the value of dice2 is 6
{
    cout << "=============" << endl;
    cout << "| 6       6 |" << endl;
    cout << "| 6       6 |" << endl;
    cout << "| 6       6 |" << endl;
    cout << "=============" << endl;
}
if(guess==total)
{
  earned=bet*8/possibility;
   cout << " You were correct... since " << guess << " can come up " << possibility << " ways," << endl;
    cout << "You win $" << bet << "*8/" << possibility << "= $" << earned << endl;
}
else//if the user guessed wrong 
{

    earned = possibility * bet;//calculation for lost money

    
    cout << " You were wrong... since " << guess << " can come up " << possibility << " ways," << endl;
    cout << " You lost " << possibility << "*$" << bet << "= $" << earned << " dollars!!!!!!" << endl;
    cout << " Thanks for your donation :)" << endl;
}//else
return 0;
}