#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    switch (ch)
    {
        case 'A':
        case 'a':
        {
        cout<<"It is Vowel"<<endl;
        break;
        }
         case 'E':
         case 'e':
        {
            cout<<"It is vowel"<<endl;
            break;
        }
        case 'I':
        case 'i':
        {
            cout<<"It is Vowel"<<endl;
            break;
        }
        case 'O':
        case 'o':
        {
            cout<<"It is Vowel"<<endl;
            break;
        }
        case 'U':
        case 'u':
        {
            cout<<"It is Vowel"<<endl;
            break;
        }
        default:
        cout<<"It is a consonant"<<endl;
    }
    return 0;
}