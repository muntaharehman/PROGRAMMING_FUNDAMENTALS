#include<iostream>
using namespace std;
main()
{
float bill , discount;
cout<<"Enter your bill: ";
cin>>bill;
if(bill <= 5000){
    discount = bill - (bill*5/100) ;
    cout<<"Your discounted bill is: "<<discount;
}
else{discount = bill - (bill*10/100);
cout<<"Your discounted bill is: "<<discount;
}
}