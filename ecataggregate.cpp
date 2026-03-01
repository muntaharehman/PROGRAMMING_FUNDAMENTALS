#include<iostream>
using namespace std;
main()
{cout<<" Enter your name: ";
string name;
cin>>name;
cout<<" Enter your matric no(out of 1100): ";
int matric;
cin>>matric;
cout<<" Enter your intermediate no(out of 550): ";
int intermediate;
cin>>intermediate;
cout<<" Enter your ECAT marks(out of 400): ";
int ECAT;
cin>>ECAT;
float Aggregate;
Aggregate = ((matric/1100.0)*0.10)+((intermediate/550.0)*0.40)+((ECAT/400.0)*0.50);
cout<<" Your ECAT aggregate is.."<<Aggregate;

}