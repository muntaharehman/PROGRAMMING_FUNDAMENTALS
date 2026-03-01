#include<iostream>
using namespace std;
main()
{float age, moves, averageYears;
cout << "Enter the person's age: ";
cin>>age;
cout<<"Enter the number of times they've moved: ";
cin>>moves;

averageYears = age/(moves + 1);

cout<< "Average number of years lived in the same house = "<<averageYears<< "years";

}