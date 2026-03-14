#include<iostream>
using namespace std;
main()
{
int t1 , t2 , td;
cout<<"Temperature city 1: ";
cin>>t1;
cout<<"Temperature city 2: ";
cin>>t2;
td = abs(t1 - t2);
if(td > 10){
    cout<< "Difference is too big.";
}
}