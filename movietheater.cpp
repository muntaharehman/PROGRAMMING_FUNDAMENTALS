#include <iostream>
using namespace std;
main()
{
 string movieName;
float adultPrice, childPrice;
int adultTickets, childTickets;
float percentage, total, donation, remaining;
cout<< "Enter movie name: ";
cin>>movieName;
cout<< "Enter the adult ticket price: ";
cin>>adultPrice;
cout<< "Enter the child ticket price: ";
cin>>childPrice;
cout<< "Enter the number of adult tickets sold: ";
cin>>adultTickets;
cout<< "Enter the number of child tickets sold: ";
cin>>childTickets;
cout<< "Enter percentage to donate to charity: ";
cin>>percentage;
total = (adultPrice * adultTickets) + (childPrice * childTickets);
donation = (percentage/100) * total;
remaining = total - donation;
cout<< "-------------------------------------------------------"<<endl;
cout<< "Movie: " <<movieName;
cout<< "Total amount generated from ticket sales: "<<total;
cout<< "Donation to charity: "<<donation;
cout<< "Remaining amount after donation: "<<remaining;

  
}