#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int inp_num, num;
    cout<<"\t  NUMBER GUESSING GAME!!\n";
    cout<<"\t  ______________________\n";
    srand(time(0));
    num=(rand()%100)+1;
    while(true)
    {
        cout<<"\nEnter a number between 1 and 100: ";
        cin>>inp_num;
        if (inp_num==num)
            break;
        else if (inp_num<num)
            cout<<"Try again! (Hint: Guess higher)\n";
        else
            cout<<"Try again! (Hint: Guess lower)\n";
    }
    cout<<"Congratulations! You have guessed correctly!\n";
    cout<<"Number to be guessed was "<<num;
    cout<<"\nThanks for playing!";
}
