#include<iostream>
using namespace std;
int main()
{
    int ac;
    double balance=5000.0;
    cout<<"Select one action from the following:"<<endl;
    cout<<"1. Deposit"<<endl<<"2. Withdraw"<<endl<<"3. Check Balance"<<endl<<"4. Exit"<<endl;
    cin>>ac;
    switch (ac)
    {
        case 1:
        {
            double deposit;
         cout<<"Enter the Amount you want to deposit: ";
         cin>>deposit;
         balance=balance+deposit;
         break;
         }
         case 2:
         {
            double withdraw;
            cout <<"Enter the amount you wnat to withdraw: ";
            cin>>withdraw;
            if(withdraw<=balance)
            {
                cout<<"Remaining balance is: "<<balance-withdraw<<endl;
            }
            else
            cout<<"Balance is insuficient"<<endl;
            break;
         }
         case 3:
         {
            cout<<"Your Balance is: "<<balance<<endl;
            break;
         }
         case 4:
         {
            cout<<"Exit"<<endl;
            break;
         }
         default:
         cout<<"Invalid option"<<endl;
    }

    return 0;
}