#include <iostream>
using namespace std;
main()
{
int n1, n2, n3, n4, n5;
int n6, n7, n8, n9, n10;
int n11, n12, n13, n14, n15;
int sum, product, subtraction;
int finalResult;

cout<< "Enter 15 numbers: ";
cin>>n1>>n2>>n3>>n4>>n5;
cin>>n6>>n7>>n8>>n9>>n10;
cin>>n11>>n12>>n13>>n14>>n15;

sum = n1 + n2 + n3 + n4 + n5;
product = n6 * n7 * n8 * n9 * n10;
subtraction = n11 - n12 - n13 - n14 - n15;

finalResult = (sum = product) - subtraction;
cout<< "Final Result: "<<finalResult;



}