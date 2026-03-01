#include<iostream>
using namespace std;
main()
{
int sides;
int angle;
cout<< "Enter the sides of polygon: ";
cin>>sides;
angle = (sides - 2) * 180;

cout<< "Sum of interior angle is"<<angle<<"Degrees";
}