#include<iostream>
#include<math.h>
using namespace std;
void bintodec(void)
{
    int bin, dec=0, temp, i=0;
    cout<<"Enter binary number: ";
    cin>>bin;
    temp=bin;
    while (temp>0)
    {
        if (temp%10 == 1)
            dec+=pow(2, i);
        temp/=10;
        i++;
    }
    cout<<bin<<" in binary is equal to "<<dec<<" in decimal.";
}
void dectobin()
{
    int bin=0, dec, temp, i=0, arr[32]={0};
    cout<<"Enter decimal number: ";
    cin>>dec;
    temp=dec;
    while (temp>0)
    {
        arr[i]=temp%2;
        temp/=2;
        i++;
    }
    cout<<dec<<" in decimal is equal to ";
    for (i-=1;i>=0;i--)
        cout<<arr[i];
    cout<<" in binary.";
}
int main()
{
    int choice;
    cout<<"\t  BINARY TO DECIMAL CONVERTER\n";
    cout<<"\t  ___________________________\n";
    cout<<"1. Binary to Decimal (press 1)\n";
    cout<<"2. Decimal to Binary (press 2)\n";
    cout<<"Press any other key to exit";
    do
    {
        cout<<"\n\nEnter choice: ";
        cin>>choice;
        switch (choice)
        {
            case 1: bintodec();
                    break;
            case 2: dectobin();
                    break;
            default: cout<<"Exiting...\n";
        }
    } while (choice==1 || choice==2);
    cout<<"Thank you for using the converter!";
}
