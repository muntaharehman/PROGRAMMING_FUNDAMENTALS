#include<iostream>
using namespace std;
main()
{int population;
int monthlyBirths;
int futurePopulation;
cout<< "Enter the current world population: ";
cin>>population;
cout<< "Enter the monthky birth rate(number of births per month): ";
cin>>monthlyBirths;

futurePopulation = population + (monthlyBirths * 365);

cout<< "Population iun three decades will be: "<< futurePopulation;
} 