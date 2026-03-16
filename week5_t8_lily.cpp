#include<iostream>
using namespace std;
main()
{
    int age, machineprice , toyprice;
    cout<<"Enter lily's age: ";
    cin>>age;
    cout<<"Enter the price of washing machine: ";
    cin>>machineprice;
    cout<<"Enter the unit price of each toy: ";
    cin>>toyprice;

    int moneySaved = 0, nextGiftMoney = 10 , toyCount = 0;
    for(int i=1; i<=age; i++)
{
    if(i%2==0){
        moneySaved = moneySaved + nextGiftMoney;
        nextGiftMoney = nextGiftMoney + 10;
    }
    else{toyCount = toyCount + 1;}
}
moneySaved = moneySaved + (toyCount*toyprice);
if(moneySaved>=machineprice){
    cout<<"Yes!"<<moneySaved - machineprice<<endl;
}
else{cout<<"No!"<<machineprice - moneySaved<<endl;}
}
