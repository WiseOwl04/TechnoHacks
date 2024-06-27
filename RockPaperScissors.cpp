#include<iostream>
using namespace std;
char CompMove()
{
    srand(time(NULL));
    int move=rand()%3;
    return move;
}
char UserMove()
{
    char move;
    cout<<"User's Move: ";
    cin>>move;
    if (move=='R')
        return 0;
    else if (move=='P')
        return 1;
    else
        return 2;
}
int main()
{
    char choice='y';
    int comp, user;
    int compScore=0, userScore=0;
    char arr[3]={'R', 'P', 'S'};
    cout<<"\t  ROCK, PAPER, SCISSORS\n";
    cout<<"\t  _____________________\n";
    cout<<"Rock (R), Paper (P), Scissors (S)! \n";
    while (choice=='y')
    {
        cout<<"\nDo you want to play? (y/n)\n";
        cin>>choice;
        if (choice!='y')
            break;
        comp=CompMove();
        user=UserMove();
        if (comp==user)
        {
            cout<<"Computer's Move: "<<arr[comp]<<"\n";
            cout<<"Tie!\n";
            cout<<"User: "<<userScore<<", Computer: "<<compScore;
        }
        else if (comp==0 && user==1)
        {
            cout<<"Computer's Move: "<<arr[comp]<<"\n";
            cout<<"User wins!\n";
            userScore++;
            cout<<"User: "<<userScore<<", Computer: "<<compScore;
        }
        else if (comp==1 && user==0)
        {
            cout<<"Computer's Move: "<<arr[comp]<<"\n";
            cout<<"Computer wins!\n";
            compScore++;
            cout<<"User: "<<userScore<<", Computer: "<<compScore;
        }
        else if (comp==1 && user==2)
        {
            cout<<"Computer's Move: "<<arr[comp]<<"\n";
            cout<<"User wins!\n";
            userScore++;
            cout<<"User: "<<userScore<<", Computer: "<<compScore;
        }
        else if (comp==2 && user==1)
        {
            cout<<"Computer's Move: "<<arr[comp]<<"\n";
            cout<<"Computer wins!\n";
            compScore++;
            cout<<"User: "<<userScore<<", Computer: "<<compScore;
        }
        else if (comp==2 && user==0)
        {
            cout<<"Computer's Move: "<<arr[comp]<<"\n";
            cout<<"User wins!\n";
            userScore++;
            cout<<"User: "<<userScore<<", Computer: "<<compScore;
        }
        else
        {
            cout<<"Computer's Move: "<<arr[comp]<<"\n";
            cout<<"Computer wins!\n";
            compScore++;
            cout<<"User: "<<userScore<<", Computer: "<<compScore;
        }
        cout<<"\n";
    }
    cout<<"\nFinal Scores-\n";
    cout<<"User: "<<userScore<<", Computer: "<<compScore;
    if (userScore>compScore)
        cout<<"\nUser wins!";
    else if (userScore<compScore)
        cout<<"\nComputer wins!";
    else
        cout<<"\nTie!";
    cout<<"\n\nThank you for playing Rock. Paper, Scissors!";
}
