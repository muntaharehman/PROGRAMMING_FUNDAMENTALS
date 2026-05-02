#include<iostream>
#include<cmath>
using namespace std;
main()
{
    float distance;
    cout<<"Enter the distance from the base of the tree: ";
    cin>>distance;
   float angle;
    cout<<"Enter the angle of elevation(in degrees): ";
    cin>>angle;
    float height = distance * tan(angle/57.2958);
    cout<<"The height of tree is: " << height;
    return 0;
}