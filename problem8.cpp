#include<iostream>
using namespace std;
main()
{
int number;
cout << "Enter a number: ";
cin >> number;

int ones = number % 10;
int tens = number / 10;

if(number>=10 && number<=19){
if(number==10){cout<<"Ten";}
if(number==11){cout<<"Eleven";}
if(number==12){cout<<"Twelve";}
if(number==13){cout<<"Thirteen";}
if(number==14){cout<<"Fourteen";}
if(number==15){cout<<"fifteen";}
if(number==16){cout<<"Sixteen";}
if(number==17){cout<<"Eighteen";}
if(number==18){cout<<"Nineteen";}
}

cout << "Ones: "<<ones<<endl;
cout << "Tens: "<<tens<<endl;
if(number >= 20 && number <= 99){
if(tens == 2){cout<<"Twenty";}
if(tens == 3){cout<<"Thirty";}
if(tens == 4){cout<<"Fourty";}
if(tens == 5){cout<<"Fifty";}
if(tens == 6){cout<<"Sixty";}
if(tens == 7){cout<<"Seventy";}
if(tens == 8){cout<<"Eighty";}
if(tens == 9){cout<<"Ninety";}

if(ones == 1){cout<<"One";}
if(ones == 2){cout<<"Two";}
if(ones == 3){cout<<"Three";}
if(ones == 4){cout<<"Four";}
if(ones == 5){cout<<"Five";}
if(ones == 6){cout<<"Six";}
if(ones == 7){cout<<"Seven";}
if(ones == 8){cout<<"Eight";}
if(ones == 9){cout<<"Nine";}
}

if(number==100){cout<<"One Hundred";}
}