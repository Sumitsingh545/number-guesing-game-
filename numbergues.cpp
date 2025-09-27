#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cctype>
using namespace std;
int main()
{
 string name;
 char input;
 int inputuser;
 int score=0;
 

  srand(time(0));

 cout<<" ENTER YOUR NAME        ";
 getline(cin,name);
 cout<<endl;
 do
 {
   
    int maxrange;
    cout<<" CHOOSE DIFFICULTY:\n";
    cout<<"1. EASY  (1 - 5)\n";
    cout<<"2. MEDIUM (1 - 10)\n";
    cout<<"3. HARD (1 - 20)\n";

    int choice ;
    cin>>choice;
    if(choice==1)
    maxrange =5;
    else if(choice==2) 
    maxrange=10;
    else
    maxrange = 20;

    int variable =rand()% maxrange +1;
    cout<<" ENTER ANY NUMBER BETWEEN 1 TO "<< maxrange << " : ";
    cin>>inputuser;
    cout<<endl;
    if(inputuser== variable)
    {
        cout<<"CONGRATULATION 🎉"<<name <<"! YOU GUESSED THE CORRECT NUMBER"<<endl;
        score++;
    }
    else
    {
       cout<<" SORRY, YOU GUESSED WRONG NUMBER TRY AGAIN"<<endl;
   }
    cout<<" WOULD YOU LIKE TO TRY AGAIN Y/N    ";
    cin>>input;
    cout<<endl;
 }
 while( toupper (input) !='N');
 cout<<" YOUR SCORE IS        "<<score<<endl;
 cout<<"GAME END"<<endl;
  return 0;
 
}