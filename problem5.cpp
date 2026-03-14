#include<iostream>
using namespace std;
main()
{
int holidays , workingdays , gametime , diff;
cout << "Holidays: ";
cin >> holidays;
workingdays = 365 - holidays;
gametime = (workingdays * 63)+ (holidays * 127);
diff = abs(30000 - gametime);
int hours = diff / 60;
int mins = diff % 60;
if(gametime <= 30000){
    cout << "Tom sleeps well./n";
}
else{cout << "Tom will run away/n";
}
cout<<hours<< "Hours and Minutes"<<mins;


}