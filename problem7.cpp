#include<iostream>
using namespace std;
main()
{
string figure;
float length , width , radius , base, height, area;
cout << "Type of figure: ";
cin >>figure;
if(figure == "square"){
   cout<<"Enter length: ";
   cin>>length;
   area = length * length;
}
else if(figure == "rectangle"){
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter width: ";
    cin>>width;
    area = length * width;
}
else if (figure == "circle"){
    cout<<"Enter radius: ";
    cin>>radius;
    area = 3.1416 * (radius * radius);
}
else if(figure == "triangle"){
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter height:";
    cin>>height;
    area = 0.5*(base * height);
}
cout << "Area of geometric figure is: "<<area<<endl;
}
