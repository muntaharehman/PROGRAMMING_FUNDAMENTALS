#include<iostream>
using namespace std;
main()
{float imposters, players, chance;
cout << "Enter imposter count: ";
cin>>imposters;
cout<<"Enter player count: ";
cin>>players;

chance = 100 * (imposters/players);

cout<< "Chance of being an imposter: "<<chance<< "%";

}