#include<iostream>
using namespace std;
main()
{int minutes, fps, totalFrames;
cout << "Enter minutes: ";
cin>>minutes;
cout<<"Enter fps: ";
cin>>fps;

totalFrames = minutes * 60 * fps;

cout<< "Total frames = "<<totalFrames;



}