#include<iostream>
using namespace std;
main()
{int sides;
int angles;
cout<< "Enter sides of polygon: ";
cin>>sides;

if (sides < 3)
{
 cout << "Polygon must have at least 3 sides.";
}
else
{
angles = (sides - 2)*180;
cout<<"Sum of angles = "<<angles;
}
}