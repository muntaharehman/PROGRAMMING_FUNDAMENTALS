#include<iostream>
using namespace std;
main()
{
int minutes;
int fps;
int totalFrames;
cout<< "Number of minutes: ";
cin>>minutes;
cout<<"Frames per second: ";
cin>>fps;
totalFrames = minutes * 60 * fps;

cout<< "Total frames per second is"<<totalFrames;
}