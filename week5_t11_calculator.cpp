#include<iostream>
using namespace std;
main()
{
while(true)
{
    int choice , num1 , num2 , add , sub , mul , div ;
    cout<<"------Simple Calculator------"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication "<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Clear Screen "<<endl;
    cout<<"6. Exit"<<endl;
    cout<<"Enter your choice(1-6): "<<endl;
    cin>>choice;

        if(choice == 1)
      { cout<< "Enter a number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        add = num1 + num2;
        cout<<"Result: "<< add<<endl;

}
     if(choice == 2)
     {cout<< "Enter a number: ";
      cin>>num1;
      cout<<"Enter second number: ";
      cin>>num2;
      sub = num1 - num2;
      cout<<"Result: "<<sub<<endl;
    }

    if(choice == 3)
    {cout<<"Enter a number: " ;
     cin>>num1;
     cout<<"Enter second number: ";
     cin>>num2;
     mul = num1 * num2;
     cout<<"Result: "<<mul<<endl;
    }

     if(choice == 4)
     {cout<< "Enter a num: ";
     cin>>num1;
     cout<<"Enter second number: ";
     cin>>num2;
     div = num1 / num2;
     cout<<"Result: "<<div<<endl;
    }

     if(choice == 5)
     {cout<< "Screen Cleared.";
      break;}

    if(choice == 6)
    {cout<< "Thankyou for using calculator.";
    break;
}
}
}