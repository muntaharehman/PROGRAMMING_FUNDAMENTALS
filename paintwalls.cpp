#include<iostream>
using namespace std;
main()
{float paintArea, width, height;
int wallsPainted, wallArea;
cout << "Number of square meters you can paint: ";
cin>>paintArea;
cout<<"width of single wall(in meters): ";
cin>>width;
cout<<"Height of the single wall(in meters): ";
cin>>height;
wallArea = width * height;
wallsPainted = paintArea / wallArea;

cout<< "Number of walls you can paint: "<<wallsPainted;

}