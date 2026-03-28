#include<iostream>
using namespace std;
 main()
{int num;
    cout<<"How many numbers you want to enter: ";
    cin>>num;

 int numbers[100];
 cout<<"Enter" << num << "numbers: \n";
for(int i= 0 ; i<num ; i++)
{
    cin>> numbers[i];
}
 cout<<"You entered: \n";
    for(int i =0 ; i<num ; i++)
    {
        cout<<numbers[i]<<" ";
    }
}

