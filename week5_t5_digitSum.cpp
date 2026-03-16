#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    cout << "Enter a Number: ";
    cin >> num;

    while(num >= 0)
    {
        sum = sum + num;
        cout << "Enter a Number: ";
        cin >> num;
    }

    cout << "Sum: " << sum;

    return 0;
}