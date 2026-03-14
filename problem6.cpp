#include<iostream>
using namespace std;
main()
{
int speed;
cout << "Enter speed: ";
cin >> speed;
if(speed <= 10){
    cout << "slow"<<endl;
}
else if(speed > 10 && speed <= 50){
    cout << "Average"<<endl;
}
else if(speed > 50 && speed <= 150 ){
    cout << "Fast"<<endl;
}
else if(speed > 150 && speed <= 1000){
    cout << "Ultra fast"<<endl;
}
else if(speed > 1000){
    cout << "Extremely fast"<<endl;
}
}