#include<iostream>
using namespace std;
main()
{
int bitsInOneByte =8 ;
int kilobytesInOneMegabyte = 1024 ;
int bytesInOneMegabyte = kilobytesInOneMegabyte * bitsInOneByte; 

int megabytes;
int bits;

cout << "Enter the size in Megabytes: ";
cin>>megabytes;

bits = megabytes * bytesInOneMegabyte;

cout << bits << "Bits "<< endl;


}