#include<iostream>
using namespace std;

main()
{
    int money, targetYear;
    int age = 18;

    cout << "Enter money: ";
    cin >> money;
    cout << "Enter year: ";
    cin >> targetYear;

    for(int i = 1800; i <= targetYear; i++)
    {
        if(i % 2 == 0)       {
            money = money - 12000;
        }
        else
        {
            money = money - (12000 + 50 * age);
        }
        age++;
    }

    if(money >= 0)
    {
        cout << "Yes! He will live a carefree life and will have " 
             << money << " dollars left." << endl;
    }
    else
    {
        cout << "He will need " << -money << " dollars to survive." << endl;
    }

    return 0;
}