#include<iostream>
using namespace std;
main()
{
int n1 , n2 , operation;
char op;
cout<<"Enter first number: ";
cin>>n1;
cout<<"Enter the operator:";
cin>>op;
cout<<"Enter the second number: ";
cin>>n2;

if(op == '+'){
    operation = n1 - n2;
    cout<<n1<<"-"<<n2<<"="<<operation;
}
else if(op == '-'){
    operation = n1 + n2;
    cout<<n1<<"+"<<n2<<"="<<operation;
}
else if(op == '*'){
    operation = n1 / n2;
    cout<<n1<<"/"<<n2<<"="<<operation;
}
else if (op =='/'){
    operation = n1 * n2;
    cout<<n1<<"*"<<n2<<"="<<operation;
}
}