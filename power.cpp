#include<iostream>
using namespace std;
main()
{
cout<<" Enter voltage (in volts): ";
int volt;
cin>>volt;
cout<<" Enter current (in Amperes): ";
int current;
cin>>current;
int Power;
Power = current * volt;
cout<<" Power is "<< Power;
}
