#include<iostream>
#include<string>
using namespace std;

char capSmall(char alphabets){
    char letter = alphabets;
    if(letter>= 'a' && letter<='z')
    {
        cout<<"You entered small " << letter;

    }
    if(letter>='A' && letter<='Z')
    {
        cout<<"You entered capital " << letter;
    }
    return letter;
}
main()
{
    char letter;
    cout<<"Enter the alphabet(A/a): ";
    cin>>letter;
    capSmall(letter);
}