#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter Grade(A,B,C,D,or F): ";
    cin>>ch;
    switch (ch)
    { 
        case 'A':
    {
    cout <<"Excellent"<<endl;
    break;
    }
    case 'B':
    {
        cout<<"Good"<<endl;
        break;
    }
    case 'C':
    {
        cout<<"best"<<endl;
        break;
    }
    case 'D':
    {
        cout<<"Normal"<<endl;
        break;
    }
    case 'F':
    {
        cout <<"Fail"<<endl;
        break;
    }
    default:
    cout <<"Invalid character"<<endl;
}
return 0;
}