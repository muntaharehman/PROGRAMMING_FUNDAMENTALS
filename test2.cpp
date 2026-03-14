#include<iostream>
using namespace std;
main()
{
int monthlySalary;
int laptopPrice = 50000;
int advanceMonthRequired = 6;
float advancePercentage = 0.50;

cout<<"Enter your monthly salary: ";
cin>>monthlySalary;

float advanceSalary = monthlySalary * advancePercentage;
float totalAdvance = advanceSalary * advanceMonthRequired;

if(totalAdvance >= 50000){
    cout<<"Yes, you can buy this laptop.";
}
else{
    cout<<"No, you can't buy this laptop";
    int monthNeeded;
    monthNeeded = laptopPrice / advanceSalary;
    cout<< "Months needed to buy laptop: "<<monthNeeded;
}

}