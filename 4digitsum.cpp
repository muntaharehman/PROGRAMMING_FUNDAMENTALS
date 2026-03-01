#include <iostream>
using namespace std;
main()
{
int num;;
int digit1, digit2, digit3, digit4;
int sum;

cout<< "Enter a 4-digit number: ";
cin>>num;
digit1 = num % 10;
num = num / 10;
digit2 = num % 10;
num = num / 10;
digit3 = num % 10;
num = num / 10;
digit4 = num % 10;
sum = digit1 + digit2 + digit3 + digit4;
cout<< "Sum of digits: "<<sum;

}