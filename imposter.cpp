#include<iostream>
using namespace std;
main()
{float imposters, players, chance;
cout << "Enter imposters: ";
cin>>imposters;
cout<<"Enter players: ";
cin>>players;

chance = 100 * (imposters/players);

cout<< "Chance = "<<chance<< "%";

}