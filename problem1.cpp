#include<iostream>
using namespace std;
main()
{
string name;
float price, discount;
cout<< "Enter country name:  ";
cin>>name;
cout<< "Enter the ticket price in $: ";
cin>>price;
if(name=="ireland"){
    discount = price * 10/100;
}
else{
    discount = price * 5/100;
}
cout<< "Discount: $"<<discount<<endl;
cout<<"Final price: $"<<price - discount<<endl;
}