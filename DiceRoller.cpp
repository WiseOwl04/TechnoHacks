#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    char choice='y';
    cout<<"\t  DICE ROLLER SIMULATOR\n";
    cout<<"\t  _____________________\n";
    srand(time(0));
    while (true)
    {
        cout<<"\nRoll dice? (y/n): ";
        cin>>choice;
        if (choice=='y')
            cout<<"The two numbers are : "<<(rand()%6)+1<<" and "<<(rand()%6)+1<<"\n";
        else
            break;
    }
    cout<<"Thank you for using the dice roller!";
}
