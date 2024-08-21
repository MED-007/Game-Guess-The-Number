#include<iostream>
using namespace std;
int main()
{
  srand(time(0));
  
  int num;
  int guess;
  int tries;

 srand(time(0));

 num=rand()%101;

 cout<<"***** Number Guessing Game *****\n\n";

 do
 {
  cout<<"Enter a guess between 1 to 100: ";
  cin>>guess;
  tries++;

if (tries==5)
 {
  cout<<endl;
  cout<<"---> Too many attempts, You failed <---\n";
  cout<<"**********************************\n";
  break;
 }

  if (guess>num)
  {
    cout<<"Too high\n";
  }
  else if (guess<num)
  {
    cout<<"Too low\n";
  }

else
{
  cout<<endl;
  cout<<"Correct! | number of tries is: "<<tries;
  cout<<"**********************************\n";
}
  
 } while (guess!=num);
 

 
 

}
    
