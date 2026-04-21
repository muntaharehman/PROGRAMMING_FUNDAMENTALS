#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    int TOTAL_BOOKS = 1000;
    int index = 7;

    // DATA STRUCTURES (Parallel Arrays)
    string titleArray[TOTAL_BOOKS] = {"Alchemist", "Hamlet", "Harry Potter", "Kite Runner", "The Hobbit", "1984", "To Kill a Mocking Bird"};
    string authorArray[TOTAL_BOOKS] = {"Paulo", "Shakespeare", "Rowling", "Khalid Hoseni", "Tolkien", "Orwell", "Harper Lee"};
    string genereArray[TOTAL_BOOKS] = {"Philosophical fiction", "Drama", "Fantasy", "Historical Fiction", "Fantasy", "Dystopian", "Historical Fiction"};
    float priceArray[TOTAL_BOOKS] = {500, 1200, 3500, 800, 1500, 600, 2500};
    int stockArray[TOTAL_BOOKS] = {10, 5, 2, 20, 15, 7, 6};
    int soldArray[TOTAL_BOOKS] = {15, 1, 50, 10, 7, 4, 3};
    float ratingArray[TOTAL_BOOKS] = {4.0, 4.5, 4.9, 4.8, 3.9, 4.6, 4.4};
    float discountArray[TOTAL_BOOKS] = {0, 10, 0, 5, 15, 0, 5}; // Discount in %

    // CRUD (Create , Read , Update , Delete)

    while (true)
    { // Main Header
        system("cls");
        cout << " ---------------------------------------------------------- " << endl;
        cout << " ------------- BOOK STORE MANAGEMENT SYSTEM --------------- " << endl;
        cout << " ---------------------------------------------------------- " << endl;

        cout << " User Menu " << endl;
        cout << "1.Shop Owner " << endl;
        cout << "2. Customer " << endl;
        cout << "3. Exit " << endl;
        cout << "Choose Option " << endl;
        string userOption;
        cin >> userOption;

        if (userOption == "1")
        { // Write here the admin code
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Menu : Login attempt " << i + 1 << endl;
                cout << "Enter username : ";
                string username;
                cin >> username;
                cout << "Enter Password : ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "Successfully login " << endl;

                    while (true)
                    {
                        system("cls");
                        cout << "1. Show all books " << endl;
                        cout << "2. Search book by title" << endl;
                        cout << "3. Update book price and stock " << endl;
                        cout << "4. Generate best selling list " << endl; // Sorted by sales
                        cout << "5. Delete book record " << endl;
                        cout << "6. Low stock alerts" << endl;
                        cout << "7. Apply discount to book" << endl;
                        cout << "8. Total Revenu Report" << endl;
                        cout << "9. Filter book by Genere" << endl;
                        cout << "10. Logout " << endl;

                        cout << "Choose option: " << endl;
                        string adminOption;
                        cin >> adminOption;

                        if (adminOption == "1")
                        {
                            // Show Books Record
                            cout << "Title\tAuthor\tGenere\tPrice\tStock\tSold\tRating\tDiscount " << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (titleArray[i] != "")
                                {
                                    cout << titleArray[i] << "\t" << authorArray[i] << "\t" << genereArray[i]<< "\t"<< stockArray[i] "\t" << soldArray[i] "\t" << ratingArray[i] "\t" << discountArray[i];
                                }
                            }
                        }
                        else if (adminOption == "2")
                        {
                            // Search book by title
                            cout << "Enter the title of book you want to search: " << endl;
                            string title;
                            cin >> title;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (titleArray[i] == title)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against title " << title << endl;
                            }
                            else
                            {
                                cout << "Title\tAuthor\tGenere\tPrice\tStock\tSold\tRating\tDiscount " << endl;
                                for (int i = 0; i < index; i++)
                                {
                                    if (titleArray[i] != "")
                                    {
                                        cout << titleArray[foundindex] << "\t" << authorArray[foundindex] << "\t" << genereArray[foundindex] "\t" << stockArray[foundindex] "\t" << soldArray[foundindex] "\t" << ratingArray[foundindex] "\t" << discountArray[foundindex];
                                    }

                                    else if (adminOption == "3")
                                    {
                                        // Update book price and stock
                                        cout << "Enter the title of book you want to update record of: " << endl;
                                        string title;
                                        cin >> title;
                                        bool found = false;
                                        int foundindex = -1;
                                        for (int i = 0; i < index; i++)
                                        {
                                            if (titleArray[i] == title)
                                            {
                                                foundindex = i;
                                                found = true;
                                            }
                                        }
                                        if (found == true)
                                        {
                                            cout << "----------OLD Record---------" << endl;
                                            cout << "Title\tAuthor\tGenere\tPrice\tStock\tSold\tRating\tDiscount " << endl;
                                            for (int i = 0; i < index; i++)
                                            {
                                                if (titleArray[i] != "")
                                                {
                                                    cout << titleArray[foundindex] << "\t" << authorArray[foundindex] << "\t" << genereArray[foundindex] "\t" << stockArray[foundindex] "\t" << soldArray[foundindex] "\t" << ratingArray[foundindex] "\t" << discountArray[foundindex];

                                                    cout << "Enter new record for update: " << endl;
                                                    cout << "Enter title of book: " << endl;
                                                    string title;
                                                    cin >> title;
                                                    cout << "Enter author name: " << endl;
                                                    string authorName;
                                                    cin >> authorName;
                                                    cout << "Enter Genere of book: " << endl;
                                                    string genere;
                                                    cin >> genere;
                                                    cout << "Enter Price of book: " << endl;
                                                    float price;
                                                    cin >> price;
                                                    cout << "Enter stock of books: " << endl;
                                                    int stock;
                                                    cin >> stock;
                                                    cout << "Enter sold books amount: " << endl;
                                                    int sold;
                                                    cin >> sold;
                                                    cout << "Enter the rating of book: " << endl;
                                                    float rating;
                                                    cin >> rating;
                                                    cout << "Enter the discount on book: " << endl;
                                                    float discount;
                                                    cin >> discount;

                                                    titleArray[foundindex] = title;
                                                    authorArray[foundindex] = authorName;
                                                    genereArray[foundindex] = genere;
                                                    stockArray[foundindex] = stock;
                                                    soldArray[foundindex] = sold;
                                                    ratingArray[foundindex] = rating;
                                                    discountArray[foundindex] = discount;
                                                }
                                                else
                                                {
                                                    cout << "Record not found " << endl;
                                                }
                                            }
                                        }
                                    }
                                        else if (adminOption == "4")
                                        {
                                            // Generate Best Selling List (SWAPING)
                                            for (int i = 0; i < index; i++)
                                            {
                                                for (int j = i + 1; j < index; j++)
                                                {
                                                    if (soldArray[i] < soldArray[j])
                                                    {
                                                        swap(titleArray[i], titleArray[j]);
                                                        swap(soldArray[i], soldArray[j]);
                                                        swap(priceArray[i], priceArray[j]);
                                                    }
                                                }
                                            }
                                            cout << "Best Sellers Sorted Successfully! View 'Display All' to see results." << endl;
                                        }
                                        else if (adminOption == "5")
                                        {
                                            // Delete Book Record
                                            cout << "Enter title to delete: ";
                                            string title;
                                            cin >> title;
                                            for (int i = 0; i < index; i++)
                                            {
                                                if (titleArray[i] == title)
                                                {
                                                    titleArray[i] = " ";
                                                    cout << "Deleted." << endl;
                                                }
                                            }
                                        }

                                        else if (adminOption == "6")
                                        {
                                            // Low Stock
                                            cout << "---LOW STOCK ALERT---" << endl;
                                            for (int i = 0; i < index; i++)
                                            {
                                                if (stockArray[i] < 5 && titleArray[i] != "")
                                                {
                                                    cout << titleArray[i] << " only " << stockArray[i] << " left " << endl;
                                                }
                                            }
                                        }
                                        else if (adminOption == "7")
                                        {
                                            // Discount
                                            cout << "Enter title: ";
                                            string title;
                                            cin >> title;
                                            for (int i = 0; i < index; i++)
                                            {
                                                if (titleArray[i] == title)
                                                {
                                                    cout << "Enter Discount % : " << endl;
                                                    cin >> discountArray[i];
                                                }
                                            }
                                        }
                                        else if (adminOption == "8")
                                        {
                                            // Total revenue report
                                            float total = 0;
                                            for (int i = 0; i < index; i++)
                                            {
                                                total += (soldArray[i] * priceArray[i]);
                                            }
                                            cout << "Total Store Revenue: " << total << endl;
                                        }
                                        else if (adminOption == "9")
                                        {
                                            // Filter Book by genere
                                            cout << "Enter Genere(fiction/historical/tec): ";
                                            string genere;
                                            cin >> genere;
                                            for (int i = 0; i < index; i++)
                                            {
                                                if (genereArray[i] == genere)
                                                {
                                                    cout << titleArray[i] << " by " << authorArray[i] << " is " << genere;
                                                }
                                            }
                                        }
                                        else if (adminOption == "10")
                                        {
                                            // Logout
                                            break;
                                            cout << "\n Press any key.... " << endl;
                                            getch();
                                        }
                                    
                                }
                            }

                        }
                                else if (userOption == "2")
                                {
                                    cout << "Enter Title: ";
                                    cin >> titleArray[index];
                                    cout << "Enter Author:  ";
                                    cin >> authorArray[index];
                                    cout << "Enter Genere: ";
                                    cin >> genereArray[index];
                                    cout << "Enter Price: ";
                                    cin >> priceArray[index];
                                    cout << "Enter stock: ";
                                    cin >> stockArray[index];
                                    soldArray[index] = 0;
                                    index++;
                                    cout << " Book Added!";
                                    getch();
                                }
                                else if (userOption == "3")
                                {
                                    break;
                                }
                                return 0;
                            }//end of nested while loop
                        }
                    }
                }
            }//end of our main while loop
        }