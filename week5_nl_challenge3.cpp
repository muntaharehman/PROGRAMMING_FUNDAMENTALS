#include<iostream>
using namespace std;

main()
{
    string pin;
    int choice, deposit, withdraw;
    int currentBalance = 1000;

    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter pin: ";
        cin >> pin;

        if(pin == "1234")
        {
            cout << "Login Successful." << endl;
            break;
        }
        else
        {
            cout << "Wrong login." << endl;
        }

        if(i == 3 && pin != "1234")
        {
            cout << "Too many attempts. Program Ends." << endl;
            
        }
    }

    for(int x = 1; x <= 5; x++)
    {
        cout << "\n--------------ATM MENU--------------" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Current Balance: " << currentBalance << endl;
        }
        else if(choice == 2)
        {
            cout << "Enter amount to deposit: ";
            cin >> deposit;

            currentBalance = currentBalance + deposit;

            cout << "Amount Deposited Successfully." << endl;
        }
        else if(choice == 3)
        {
            cout << "Enter amount to withdraw: ";
            cin >> withdraw;

            if(withdraw <= currentBalance)
            {
                currentBalance = currentBalance - withdraw;
                cout << "Please collect your cash." << endl;
            }
            else
            {
                cout << "Insufficient Balance." << endl;
            }
        }
        else if(choice == 4)
        {
            cout << "Thank you for using ATM." << endl;
            break;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    }
}