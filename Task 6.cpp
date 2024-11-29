#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout <<"Enter R for stop,G for go and Y for slow down:";
    cin>>ch;
    switch (ch)
    {
        case 'R':
        {
            cout <<"Stop"<<endl;
            break;
        }
        case 'G':
        {
            cout << "Go"<<endl;
            break;
        }
        case 'Y':
        {
            cout<<"slow down"<<endl;
            break;
        }
        default:
        cout<<"Please Enter only R,G or Y"<<endl;

    }
    return 0;
}