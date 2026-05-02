#include<iostream>
#include<cmath>
using namespace std;
float multiply(float num)
{
    float total = num * 5;
    return total;
}
main()
{
float num;
cout<<"Enter the number: ";
cin>>num;
float result=multiply(num);
cout<<result;
}