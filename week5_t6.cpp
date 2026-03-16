#include<iostream>
using namespace std;
main()
{
    int n1 , n2 , x , y , z , HCF , LCM;
 cout<<"Enter a number: ";
 cin>>n1;
 cout<<"Enter second number: ";
 cin>>n2;
 x=n1;
 y=n2;
 while(y!=0)
 {
 z=x%y;
 x=y;
 y=z;
 }
HCF=x;
LCM= (n1 * n2)/HCF;
cout<<"HCF: "<<HCF<<endl;
cout<<"LCM: "<<LCM<<endl;
    
}