#include<iostream>
using namespace std;
main()
{
char character;
cout<< "Enter single character in lower case: ";
cin>>character;


if(character =='a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'){
cout << "It is a vowel.";
}

else if(character >= '0' && character <= '9'){ 
    cout << "It is a number.";
}

else{cout << "It is a consonant.";}
}