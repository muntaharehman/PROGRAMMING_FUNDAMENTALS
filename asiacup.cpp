#include<iostream>
using namespace std;
main()
{
int wins;
int draws;
int losses;
int totalPoints;
cout<< "Enter the number of wins: ";
cin>>wins;
cout<< "Enter the number of draws: ";
cin>>draws;
cout<< "Enter the number of losses: ";
cin>>losses;

totalPoints = (wins * 3)+(draws * 1);

cout << "Pakistan has obtained"<<totalPoints<<"in Asia Cup Tournament";

}
