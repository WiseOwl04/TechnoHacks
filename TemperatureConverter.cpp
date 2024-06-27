#include<iostream>
using namespace std;
int main()
{
    float C, F;
    int choice=1;
    cout<<"\t  TEMPERATURE CONVERTER\n";
    cout<<"\t  _____________________\n";
    cout<<"Choose one of the following options:\n";
    cout<<"1. Celsius to Fahrenheit (Press 1)\n";
    cout<<"2. Fahrenheit to Celsius (Press 2)\n";
    cout<<"3. Press any other key to exit Converter\n";
    while (choice==1 || choice ==2)
    {
        cout<<"\nEnter choice: ";
        cin>>choice;
        switch (choice)
        {
            case 1: cout<<"Enter temp: ";
                    cin>>C;
                    F=(C * 9/5) + 32;
                    cout<<C<<" degrees Celsius is equal to "<<F<<" degrees Fahrenheit\n";
                    break;
            case 2: cout<<"Enter temp: ";
                    cin>>F;
                    C=(F - 32) * 5/9 ;
                    cout<<F<<" degrees Fahrenheit is equal to "<<C<<" degrees Celsius\n";
                    break;
            default: cout<<"Exiting...";
        }
    }
    cout<<"\nThank you for using the converter!";
}
