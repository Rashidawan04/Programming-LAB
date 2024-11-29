#include<iostream>
using namespace std;
int main()
{
    float num1=0;
    float num2=0;
    char op;
    cout<<"Enter 1st number: ";
    cin>>num1;
    cout<<"Enter operator: ";
    cin>>op;
    cout<<"Enter 2nd number: ";
    cin>>num2;
switch (op)
    {
    case '+':
    {
        cout<<"Sum is: "<<num1+num2<<endl;
        break;
        }
        case '-':
        {
        cout<<"Subtraction is: "<<num1-num2<<endl;
        break;
        }
        case '*':
        {
            cout<<"Multiplication is: "<<num1*num2<<endl;
            break;
        }
        case '/':
        {
            if(num2!=0)
            cout<<"Divission is: "<<num1/num2<<endl;
            else
            cout<<"Divider is zero"<<endl;
            break;
        }
    }
    return 0;

}