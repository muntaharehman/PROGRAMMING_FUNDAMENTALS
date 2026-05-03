#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    int index = 7;

    // DATA STRUCTURES (Parallel Arrays)
    string titleArray[1000] = {"Alchemist", "Hamlet", "Harry Potter", "Kite Runner", "The Hobbit", "1984", "To Kill a Mocking Bird"};
    string authorArray[1000] = {"Paulo", "Shakespeare", "Rowling", "Khalid Hoseni", "Tolkien", "Orwell", "Harper Lee"};
    string genereArray[1000] = {"Philosophical fiction", "Drama", "Fantasy", "Historical Fiction", "Fantasy", "Dystopian", "Historical Fiction"};
    float priceArray[1000] = {500, 1200, 3500, 800, 1500, 600, 2500};
    int stockArray[1000] = {10, 5, 2, 20, 15, 7, 6};
    int soldArray[1000] = {15, 1, 50, 10, 7, 4, 3};
    float ratingArray[1000] = {4.0, 4.5, 4.9, 4.8, 3.9, 4.6, 4.4};
    float discountArray[1000] = {0, 10, 0, 5, 15, 0, 5};

    while (true)
    {
        system("cls");
        cout << " ---------------------------------------------------------- " << endl;
        cout << " ------------- BOOK STORE MANAGEMENT SYSTEM --------------- " << endl;
        cout << " ---------------------------------------------------------- " << endl;
        cout << " User Menu " << endl;
        cout << "1. Shop Owner " << endl;
        cout << "2. Customer " << endl;
        cout << "3. Exit " << endl;
        cout << "Choose Option: ";
        string userOption;
        cin >> userOption;

        // ===================== ADMIN / SHOP OWNER =====================
        if (userOption == "1")
        {
            bool loggedIn = false;

            for (int attempt = 0; attempt < 3; attempt++)
            {
                system("cls");
                cout << "Admin Login - Attempt " << attempt + 1 << " of 3" << endl;
                cout << "Enter username: ";
                string username;
                cin >> username;
                cout << "Enter password: ";
                string password;
                cin >> password;

                if (username == "admin" && password == "123")
                {
                    loggedIn = true;
                    cout << "Login successful!" << endl;
                    break;
                }
                else
                {
                    cout << "Wrong credentials. Try again." << endl;
                }
            }

            if (!loggedIn)
            {
                cout << "Too many failed attempts. Returning to main menu." << endl;
                getch();
                continue;
            }

            // Admin Menu Loop
            while (true)
            {
                system("cls");
                cout << " -------- ADMIN MENU -------- " << endl;
                cout << "1.  Show all books " << endl;
                cout << "2.  Search book by title " << endl;
                cout << "3.  Update book record " << endl;
                cout << "4.  Generate best selling list " << endl;
                cout << "5.  Delete book record " << endl;
                cout << "6.  Low stock alerts " << endl;
                cout << "7.  Apply discount to book " << endl;
                cout << "8.  Total Revenue Report " << endl;
                cout << "9.  Filter book by Genre " << endl;
                cout << "10. Add new book " << endl;
                cout << "11. Logout " << endl;
                cout << "Choose option: ";
                string adminOption;
                cin >> adminOption;

                // ---- 1. Show All Books ----
                if (adminOption == "1")
                {
                    system("cls");
                    cout << "---------- ALL BOOKS ----------" << endl;
                    cout << "No.\tTitle\t\tAuthor\t\tGenre\t\tPrice\tStock\tSold\tRating\tDiscount" << endl;
                    for (int i = 0; i < index; i++)
                    {
                        if (titleArray[i] != " " && titleArray[i] != "")
                        {
                            cout << i + 1 << ".\t"
                                 << titleArray[i] << "\t"
                                 << authorArray[i] << "\t"
                                 << genereArray[i] << "\t"
                                 << priceArray[i] << "\t"
                                 << stockArray[i] << "\t"
                                 << soldArray[i] << "\t"
                                 << ratingArray[i] << "\t"
                                 << discountArray[i] << "%" << endl;
                        }
                    }
                    cout << "\nPress any key to go back..." << endl;
                    getch();
                }

                // ---- 2. Search Book by Title ----
                else if (adminOption == "2")
                {
                    system("cls");
                    cout << "Enter the title of the book: ";
                    string title;
                    cin >> title;

                    bool found = false;
                    for (int i = 0; i < index; i++)
                    {
                        if (titleArray[i] == title)
                        {
                            found = true;
                            cout << "\n--- Book Found ---" << endl;
                            cout << "Title    : " << titleArray[i] << endl;
                            cout << "Author   : " << authorArray[i] << endl;
                            cout << "Genre    : " << genereArray[i] << endl;
                            cout << "Price    : " << priceArray[i] << endl;
                            cout << "Stock    : " << stockArray[i] << endl;
                            cout << "Sold     : " << soldArray[i] << endl;
                            cout << "Rating   : " << ratingArray[i] << endl;
                            cout << "Discount : " << discountArray[i] << "%" << endl;
                        }
                    }
                    if (!found)
                    {
                        cout << "No book found with title: " << title << endl;
                    }
                    cout << "\nPress any key to go back..." << endl;
                    getch();
                }

                // ---- 3. Update Book Record ----
                else if (adminOption == "3")
                {
                    system("cls");
                    cout << "Enter the title of the book to update: ";
                    string title;
                    cin >> title;

                    bool found = false;
                    int foundindex = -1;
                    for (int i = 0; i < index; i++)
                    {
                        if (titleArray[i] == title)
                        {
                            found = true;
                            foundindex = i;
                        }
                    }

                    if (!found)
                    {
                        cout << "Record not found." << endl;
                    }
                    else
                    {
                        cout << "\n--- OLD Record ---" << endl;
                        cout << "Title    : " << titleArray[foundindex] << endl;
                        cout << "Author   : " << authorArray[foundindex] << endl;
                        cout << "Genre    : " << genereArray[foundindex] << endl;
                        cout << "Price    : " << priceArray[foundindex] << endl;
                        cout << "Stock    : " << stockArray[foundindex] << endl;
                        cout << "Sold     : " << soldArray[foundindex] << endl;
                        cout << "Rating   : " << ratingArray[foundindex] << endl;
                        cout << "Discount : " << discountArray[foundindex] << "%" << endl;

                        cout << "\n--- Enter New Record ---" << endl;
                        cout << "Enter new title: ";
                        string newTitle;
                        cin >> newTitle;
                        cout << "Enter new author: ";
                        string newAuthor;
                        cin >> newAuthor;
                        cout << "Enter new genre: ";
                        string newGenere;
                        cin >> newGenere;
                        cout << "Enter new price: ";
                        float newPrice;
                        cin >> newPrice;
                        cout << "Enter new stock: ";
                        int newStock;
                        cin >> newStock;
                        cout << "Enter sold amount: ";
                        int newSold;
                        cin >> newSold;
                        cout << "Enter new rating: ";
                        float newRating;
                        cin >> newRating;
                        cout << "Enter new discount %: ";
                        float newDiscount;
                        cin >> newDiscount;

                        titleArray[foundindex] = newTitle;
                        authorArray[foundindex] = newAuthor;
                        genereArray[foundindex] = newGenere;
                        priceArray[foundindex] = newPrice;
                        stockArray[foundindex] = newStock;
                        soldArray[foundindex] = newSold;
                        ratingArray[foundindex] = newRating;
                        discountArray[foundindex] = newDiscount;

                        cout << "\nRecord updated successfully!" << endl;
                    }
                    cout << "\nPress any key to go back..." << endl;
                    getch();
                }

                // ---- 4. Best Selling List ----
                else if (adminOption == "4")
                {
                    system("cls");
                    // Bubble sort by soldArray descending
                    for (int i = 0; i < index; i++)
                    {
                        for (int j = i + 1; j < index; j++)
                        {
                            if (soldArray[i] < soldArray[j])
                            {
                                swap(titleArray[i], titleArray[j]);
                                swap(authorArray[i], authorArray[j]);
                                swap(genereArray[i], genereArray[j]);
                                swap(priceArray[i], priceArray[j]);
                                swap(stockArray[i], stockArray[j]);
                                swap(soldArray[i], soldArray[j]);
                                swap(ratingArray[i], ratingArray[j]);
                                swap(discountArray[i], discountArray[j]);
                            }
                        }
                    }
                    cout << "--- BEST SELLERS ---" << endl;
                    for (int i = 0; i < index; i++)
                    {
                        if (titleArray[i] != " " && titleArray[i] != "")
                        {
                            cout << i + 1 << ". " << titleArray[i] << " - Sold: " << soldArray[i] << endl;
                        }
                    }
                    cout << "\nPress any key to go back..." << endl;
                    getch();
                }

                // ---- 5. Delete Book Record ----
                else if (adminOption == "5")
                {
                    system("cls");
                    cout << "Enter title to delete: ";
                    string title;
                    cin >> title;

                    bool found = false;
                    for (int i = 0; i < index; i++)
                    {
                        if (titleArray[i] == title)
                        {
                            found = true;
                            titleArray[i] = " ";
                            authorArray[i] = " ";
                            genereArray[i] = " ";
                            priceArray[i] = 0;
                            stockArray[i] = 0;
                            soldArray[i] = 0;
                            ratingArray[i] = 0;
                            discountArray[i] = 0;
                            cout << "Book deleted successfully." << endl;
                        }
                    }
                    if (!found)
                    {
                        cout << "Book not found." << endl;
                    }
                    cout << "\nPress any key to go back..." << endl;
                    getch();
                }

                // ---- 6. Low Stock Alerts ----
                else if (adminOption == "6")
                {
                    system("cls");
                    cout << "--- LOW STOCK ALERT (less than 5 copies) ---" << endl;
                    bool any = false;
                    for (int i = 0; i < index; i++)
                    {
                        if (stockArray[i] < 5 && titleArray[i] != " " && titleArray[i] != "")
                        {
                            cout << titleArray[i] << " - only " << stockArray[i] << " left!" << endl;
                            any = true;
                        }
                    }
                    if (!any)
                    {
                        cout << "All books have sufficient stock." << endl;
                    }
                    cout << "\nPress any key to go back..." << endl;
                    getch();
                }

                // ---- 7. Apply Discount ----
                else if (adminOption == "7")
                {
                    system("cls");
                    cout << "Enter title to apply discount: ";
                    string title;
                    cin >> title;

                    bool found = false;
                    for (int i = 0; i < index; i++)
                    {
                        if (titleArray[i] == title)
                        {
                            found = true;
                            cout << "Current discount: " << discountArray[i] << "%" << endl;
                            cout << "Enter new discount %: ";
                            cin >> discountArray[i];
                            cout << "Discount updated!" << endl;
                        }
                    }
                    if (!found)
                    {
                        cout << "Book not found." << endl;
                    }
                    cout << "\nPress any key to go back..." << endl;
                    getch();
                }

                // ---- 8. Total Revenue Report ----
                else if (adminOption == "8")
                {
                    system("cls");
                    float total = 0;
                    cout << "--- REVENUE REPORT ---" << endl;
                    for (int i = 0; i < index; i++)
                    {
                        if (titleArray[i] != " " && titleArray[i] != "")
                        {
                            float revenue = soldArray[i] * priceArray[i];
                            cout << titleArray[i] << " : " << revenue << " Rs" << endl;
                            total += revenue;
                        }
                    }
                    cout << "----------------------" << endl;
                    cout << "Total Store Revenue: " << total << " Rs" << endl;
                    cout << "\nPress any key to go back..." << endl;
                    getch();
                }

                // ---- 9. Filter by Genre ----
                else if (adminOption == "9")
                {
                    system("cls");
                    cout << "Enter Genre to filter by: ";
                    string genere;
                    cin >> genere;

                    bool found = false;
                    for (int i = 0; i < index; i++)
                    {
                        if (genereArray[i] == genere && titleArray[i] != " " && titleArray[i] != "")
                        {
                            found = true;
                            cout << titleArray[i] << " by " << authorArray[i] << endl;
                        }
                    }
                    if (!found)
                    {
                        cout << "No books found in genre: " << genere << endl;
                    }
                    cout << "\nPress any key to go back..." << endl;
                    getch();
                }

                // ---- 10. Add New Book ----
                else if (adminOption == "10")
                {
                    system("cls");
                    cout << "--- ADD NEW BOOK ---" << endl;
                    cout << "Enter title: ";
                    cin >> titleArray[index];
                    cout << "Enter author: ";
                    cin >> authorArray[index];
                    cout << "Enter genre: ";
                    cin >> genereArray[index];
                    cout << "Enter price: ";
                    cin >> priceArray[index];
                    cout << "Enter stock: ";
                    cin >> stockArray[index];
                    cout << "Enter rating: ";
                    cin >> ratingArray[index];
                    soldArray[index] = 0;
                    discountArray[index] = 0;
                    index++;
                    cout << "Book added successfully!" << endl;
                    cout << "\nPress any key to go back..." << endl;
                    getch();
                }

                // ---- 11. Logout ----
                else if (adminOption == "11")
                {
                    cout << "Logging out..." << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "Invalid option. Try again." << endl;
                    getch();
                }
            } // end admin while loop
        }

        // ===================== CUSTOMER =====================
        else if (userOption == "2")
        {
            while (true)
            {
                system("cls");
                cout << " -------- CUSTOMER MENU -------- " << endl;
                cout << "1. View all books " << endl;
                cout << "2. Search book by title " << endl;
                cout << "3. Buy a book " << endl;
                cout << "4. Exit to main menu " << endl;
                cout << "Choose option: ";
                string custOption;
                cin >> custOption;

                // ---- View All Books ----
                if (custOption == "1")
                {
                    system("cls");
                    cout << "--- AVAILABLE BOOKS ---" << endl;
                    for (int i = 0; i < index; i++)
                    {
                        if (titleArray[i] != " " && titleArray[i] != "" && stockArray[i] > 0)
                        {
                            float discountedPrice = priceArray[i] - (priceArray[i] * discountArray[i] / 100);
                            cout << i + 1 << ". " << titleArray[i]
                                 << " by " << authorArray[i]
                                 << " | Genre: " << genereArray[i]
                                 << " | Price: " << discountedPrice << " Rs"
                                 << " | Rating: " << ratingArray[i]
                                 << " | Stock: " << stockArray[i] << endl;
                        }
                    }
                    cout << "\nPress any key to go back..." << endl;
                    getch();
                }

                // ---- Search Book ----
                else if (custOption == "2")
                {
                    system("cls");
                    cout << "Enter title to search: ";
                    string title;
                    cin >> title;

                    bool found = false;
                    for (int i = 0; i < index; i++)
                    {
                        if (titleArray[i] == title)
                        {
                            found = true;
                            float discountedPrice = priceArray[i] - (priceArray[i] * discountArray[i] / 100);
                            cout << "\n--- Book Found ---" << endl;
                            cout << "Title    : " << titleArray[i] << endl;
                            cout << "Author   : " << authorArray[i] << endl;
                            cout << "Genre    : " << genereArray[i] << endl;
                            cout << "Price    : " << discountedPrice << " Rs (after discount)" << endl;
                            cout << "Rating   : " << ratingArray[i] << endl;
                            cout << "Stock    : " << stockArray[i] << endl;
                        }
                    }
                    if (!found)
                    {
                        cout << "Book not found." << endl;
                    }
                    cout << "\nPress any key to go back..." << endl;
                    getch();
                }

                // ---- Buy a Book ----
                else if (custOption == "3")
                {
                    system("cls");
                    cout << "Enter title of book to buy: ";
                    string title;
                    cin >> title;

                    bool found = false;
                    for (int i = 0; i < index; i++)
                    {
                        if (titleArray[i] == title)
                        {
                            found = true;
                            if (stockArray[i] <= 0)
                            {
                                cout << "Sorry, this book is out of stock." << endl;
                            }
                            else
                            {
                                float discountedPrice = priceArray[i] - (priceArray[i] * discountArray[i] / 100);
                                cout << "Title : " << titleArray[i] << endl;
                                cout << "Price : " << discountedPrice << " Rs" << endl;
                                cout << "Confirm purchase? (y/n): ";
                                char confirm;
                                cin >> confirm;
                                if (confirm == 'y' || confirm == 'Y')
                                {
                                    stockArray[i]--;
                                    soldArray[i]++;
                                    cout << "Purchase successful! Enjoy your book." << endl;
                                }
                                else
                                {
                                    cout << "Purchase cancelled." << endl;
                                }
                            }
                        }
                    }
                    if (!found)
                    {
                        cout << "Book not found." << endl;
                    }
                    cout << "\nPress any key to go back..." << endl;
                    getch();
                }

                // ---- Exit Customer Menu ----
                else if (custOption == "4")
                {
                    break;
                }
                else
                {
                    cout << "Invalid option." << endl;
                    getch();
                }
            } // end customer while loop
        }

        // ===================== EXIT =====================
        else if (userOption == "3")
        {
            cout << "Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid option. Try again." << endl;
            getch();
        }

    } // end main while loop

    return 0;
}