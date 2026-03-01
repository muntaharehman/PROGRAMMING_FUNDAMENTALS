#include<iostream>
using namespace std;
main()
{float age, moves, averageYears;
cout << "Enter age: ";
cin>>age;
cout<<"moves: ";
cin>>moves;

averageYears = age/(moves + 1);

cout<< "Average years = "<<averageYears<< "years";

}