#include<iostream>
using namespace std;
main()
{ 
 int redroses, whiteroses,tulips;
 int price , finalprice;
 cout<<"Enter no. of red roses: ";
 cin>>redroses;
 cout<<"Enter number of white roses: ";
 cin>>whiteroses;
 cout<<"Enter number of tulips: ";
 cin>>tulips;
price = redroses * 2.00 + whiteroses * 4.10 + tulips * 2.50;
cout<< "Original price: "<<price<<endl;
if(price > 200){
 finalprice = price - (price * 0.20);
 cout<< "Price after discount : "<<finalprice;
}



}
