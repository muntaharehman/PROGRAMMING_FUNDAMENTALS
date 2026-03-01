#include<iostream>
using namespace std;
main()
{float paintArea, width, height;
int wallsPainted;
cout << "Enter paint area: ";
cin>>paintArea;
cout<<"width: ";
cin>>width;
cout<<"Enter height: ";
cin>>height;
wallsPainted = paintArea * (width/height);

cout<< "Walls Painted = "<<wallsPainted;

}