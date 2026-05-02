#include<iostream>
#include<cmath>

using namespace std;
main()
{
  int base , power;
  cout<<"Enter the base number: ";
  cin>>base;
  cout<<"Enter the power number: ";
  cin>>power;
  cout<< base << "raised to " << power << " is: "<<pow(base , power);
  return 0;
}