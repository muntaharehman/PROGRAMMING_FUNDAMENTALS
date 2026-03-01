#include<iostream>
using namespace std;
main()
{
string name;
float weight;
int days;
cout<< "Enter the name of person: ";
cin>>name;
cout<< "Enter the target weight loss (in kg): ";
cin>>weight;
days = weight * 15;
cout <<name<<",you will need "<<days<<"days to loose "<<weight<<"kg";


}