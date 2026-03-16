#include<iostream>
using namespace std;
main()
{
    int choice ;
    string book;

    for(int i =1; i<=7; i++ )
    {cout<<"------Library System------"<<endl;
    cout<<"1. Add book"<<endl;
    cout<<"2. View book"<<endl;
    cout<<"3. Borrow book "<<endl;
    cout<<"4. Issue book"<<endl;
    cout<<"5. Exit "<<endl;
    
    cout<<"Enter your choice(1-5): "<<endl;
    cin>>choice;

        if(choice == 1)
      { cout<< "Enter book name: ";
        cin>>book;
        cout<<"You added a book: "<<book<<endl;
        }

     else if(choice == 2)
     {cout<< "Enter book name: ";
        cin>>book;
      cout<<"you are viewing: "<<book<<endl;
      
    }

    else if(choice == 3)
    {cout<<"Enter book name: " ;
     cin>>book;
     cout<<"You borrowed: "<<book<<endl;
     
    }

     else if(choice == 4)
     {cout<< "Enter book name: ";
     int issue;
     cin>>issue;
    }

     else if(choice == 5)
     {cout<< "Exiting Library System. Goodbye";
        break;}

}
}