#include<iostream>
using namespace std;
main()
{
int n , digitToFind, digit, count=0;
cout<<"Enter number: ";
cin>>n;
cout<<"Enter the digit for frequency: ";
cin>>digitToFind;
for(; n>0; n=n/10)
{
    digit = n%10;
    if(digit == digitToFind){count++;}
}
cout<<"Frequency of"<<digitToFind<<"is"<<count;


}