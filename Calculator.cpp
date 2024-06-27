#include<iostream>
using namespace std;
void add(float a, float b)
{
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<a<<" + "<<b<<" = "<<a+b;
}
void sub(float a, float b)
{
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<a<<" - "<<b<<" = "<<a-b;
}
void mul(float a, float b)
{
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<a<<" x "<<b<<" = "<<a*b;
}
void divide(float a, float b)
{
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<a<<" / "<<b<<" = "<<a/b;
}
int main()
{
    float a, b;
    char choice;
    cout<<"\t  SIMPLE CALCULATOR\n";
    cout<<"\t  _________________\n";
    cout<<"1. Add (+)\n";
    cout<<"2. Subtract (-)\n";
    cout<<"3. Multiply (*)\n";
    cout<<"4. Divide (/)\n";
    cout<<"5. To exit, press any other key";
    do
    {
        cout<<"\n\nEnter choice: ";
        cin>>choice;
        switch(choice)
        {
            case '+': add(a,b);
                      break;
            case '-': sub(a,b);
                      break;
            case '*': mul(a,b);
                      break;
            case '/': divide(a,b);
                      break;
            default: cout<<"Exiting...\n";
        }
    } while (choice=='+' || choice=='-' || choice=='*' || choice=='/');
    cout<<"Thank you for using the calculator!";
}
