#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

// ================= GLOBAL VARIABLES =================

string fileName = "C:\\Users\\user\\OneDrive\\pf c++\\books.txt";

int indexBooks = 0;

string titleArray[100];
string authorArray[100];
string genreArray[100];

float priceArray[100];
float ratingArray[100];
float discountArray[100];

int stockArray[100];
int soldArray[100];

// ================= FILE HANDLING =================

// LOAD DATA
void loadData()
{
    ifstream file(fileName);

    if (!file)
    {
       
        return;
    }

    indexBooks = 0;

    while (getline(file, titleArray[indexBooks]))
    {
        // Skip blank lines between records
        if (titleArray[indexBooks].empty())
        {
            continue;
        }

        getline(file, authorArray[indexBooks]);
        getline(file, genreArray[indexBooks]);

        file >> priceArray[indexBooks];
        file >> stockArray[indexBooks];
        file >> soldArray[indexBooks];
        file >> ratingArray[indexBooks];
        file >> discountArray[indexBooks];

        file.ignore(); 

        indexBooks++;

        if (indexBooks >= 100)
            break;
    }

    file.close();
}

// SAVE DATA
void saveData()
{
    ofstream file(fileName);

    if (!file)
    {
        cout << "ERROR: Could not open books.txt for saving!" << endl;
        return;
    }

    for (int i = 0; i < indexBooks; i++)
    {
        file << titleArray[i]    << "\n";
        file << authorArray[i]   << "\n";
        file << genreArray[i]    << "\n";
        file << priceArray[i]    << "\n";
        file << stockArray[i]    << "\n";
        file << soldArray[i]     << "\n";
        file << ratingArray[i]   << "\n";
        file << discountArray[i] << "\n";
    }

    file.close();
}

// ================= UTILITIES =================

void pauseScreen()
{
    cout << endl;
    cout << "Press any key to continue...";
    getch();
}

void header()
{
    system("cls");

    cout << "======================================================" << endl;
    cout << "          BOOK STORE MANAGEMENT SYSTEM"                 << endl;
    cout << "======================================================" << endl;
}


void clearInput()
{
    cin.clear();
    cin.ignore(1000, '\n');
}

// ================= ADMIN LOGIN =================

bool adminLogin()
{
    string username;
    string password;

    for (int i = 1; i <= 3; i++)
    {
        system("cls");

        cout << "============== ADMIN LOGIN ==============" << endl;
        cout << "Attempt " << i << " of 3" << endl << endl;

        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        if (username == "admin" && password == "12345")
        {
            cout << endl << "Login Successful!" << endl;
            pauseScreen();
            return true;
        }
        else
        {
            cout << endl << "Invalid Credentials! Try again." << endl;
            pauseScreen();
        }
    }

    cout << "Too many failed attempts. Returning to main menu." << endl;
    pauseScreen();
    return false;
}

// ================= SHOW ALL BOOKS =================

void showBooks()
{
    system("cls");

    cout << "================ ALL BOOKS ================" << endl;

    if (indexBooks == 0)
    {
        cout << "No Books Available!" << endl;
        pauseScreen();
        return;
    }

    for (int i = 0; i < indexBooks; i++)
    {
        float finalPrice =
            priceArray[i] - (priceArray[i] * discountArray[i] / 100);

        cout << endl;
        cout << "Book No : " << i + 1                    << endl;
        cout << "Title   : " << titleArray[i]             << endl;
        cout << "Author  : " << authorArray[i]            << endl;
        cout << "Genre   : " << genreArray[i]             << endl;
        cout << "Price   : Rs." << finalPrice;
        if (discountArray[i] > 0)
            cout << " (After " << discountArray[i] << "% discount)";
        cout << endl;
        cout << "Stock   : " << stockArray[i]             << endl;
        cout << "Sold    : " << soldArray[i]              << endl;
        cout << "Rating  : " << ratingArray[i]            << endl;
        cout << "-----------------------------------------"  << endl;
    }

    pauseScreen();
}

// ================= ADD BOOK =================

void addBook()
{
    system("cls");

    cout << "================ ADD BOOK ================" << endl;

    if (indexBooks >= 100)
    {
        cout << "Store Full! Cannot add more books." << endl;
        pauseScreen();
        return;
    }

    clearInput(); 

    cout << "Enter Title  : ";
    getline(cin, titleArray[indexBooks]);

    cout << "Enter Author : ";
    getline(cin, authorArray[indexBooks]);

    cout << "Enter Genre  : ";
    getline(cin, genreArray[indexBooks]);

    cout << "Enter Price  : ";
    cin >> priceArray[indexBooks];

    cout << "Enter Stock  : ";
    cin >> stockArray[indexBooks];

    cout << "Enter Rating (0-5): ";
    cin >> ratingArray[indexBooks];

    // Rating validation
    if (ratingArray[indexBooks] < 0) ratingArray[indexBooks] = 0;
    if (ratingArray[indexBooks] > 5) ratingArray[indexBooks] = 5;

    soldArray[indexBooks]     = 0;
    discountArray[indexBooks] = 0;

    indexBooks++;

    saveData();

    cout << endl << "Book Added Successfully!" << endl;
    pauseScreen();
}

// ================= SEARCH BOOK =================

void searchBook()
{
    system("cls");

    string search;
    bool found = false;

    cout << "================ SEARCH BOOK ================" << endl;

    clearInput(); 

    cout << "Enter Title: ";
    getline(cin, search);

    for (int i = 0; i < indexBooks; i++)
    {
        if (titleArray[i] == search)
        {
            found = true;

            float finalPrice =
                priceArray[i] - (priceArray[i] * discountArray[i] / 100);

            cout << endl;
            cout << "Book Found!" << endl;
            cout << "Title   : " << titleArray[i]          << endl;
            cout << "Author  : " << authorArray[i]         << endl;
            cout << "Genre   : " << genreArray[i]          << endl;
            cout << "Price   : Rs." << finalPrice;
            if (discountArray[i] > 0)
                cout << " (After " << discountArray[i] << "% discount)";
            cout << endl;
            cout << "Stock   : " << stockArray[i]          << endl;
            cout << "Sold    : " << soldArray[i]           << endl;
            cout << "Rating  : " << ratingArray[i]         << endl;
            cout << "-----------------------------------------" << endl;
        }
    }

    if (!found)
    {
        cout << "Book Not Found!" << endl;
    }

    pauseScreen();
}

// ================= BUY BOOK =================

void buyBook()
{
    system("cls");

    string buy;
    bool found = false;

    cout << "================ BUY BOOK ================" << endl;

    clearInput(); 

    cout << "Enter Book Title: ";
    getline(cin, buy);

    for (int i = 0; i < indexBooks; i++)
    {
        if (titleArray[i] == buy)
        {
            found = true;

            if (stockArray[i] > 0)
            {
                float finalPrice =
                    priceArray[i] - (priceArray[i] * discountArray[i] / 100);

                stockArray[i]--;
                soldArray[i]++;

                saveData();

                cout << endl;
                cout << "Purchase Successful!" << endl;
                cout << "Book    : " << titleArray[i] << endl;
                cout << "Price   : Rs." << finalPrice  << endl;
                cout << "Thank you for your purchase!" << endl;
            }
            else
            {
                cout << endl << "Sorry, this book is Out of Stock!" << endl;
            }

            break; 
        }
    }

    if (!found)
    {
        cout << "Book Not Found!" << endl;
    }

    pauseScreen();
}

// ================= UPDATE BOOK =================

void updateBook()
{
    system("cls");

    string oldTitle;
    bool found = false;

    cout << "================ UPDATE BOOK ================" << endl;

    clearInput(); 

    cout << "Enter Book Title To Update: ";
    getline(cin, oldTitle);

    for (int i = 0; i < indexBooks; i++)
    {
        if (titleArray[i] == oldTitle)
        {
            found = true;

            cout << "Enter New Title    : ";
            getline(cin, titleArray[i]);

            cout << "Enter New Author   : ";
            getline(cin, authorArray[i]);

            cout << "Enter New Genre    : ";
            getline(cin, genreArray[i]);

            cout << "Enter New Price    : ";
            cin >> priceArray[i];

            cout << "Enter New Stock    : ";
            cin >> stockArray[i];

            cout << "Enter New Rating   : ";
            cin >> ratingArray[i];

            cout << "Enter Discount %   : ";
            cin >> discountArray[i];

            saveData();

            cout << endl << "Book Updated Successfully!" << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "Book Not Found!" << endl;
    }

    pauseScreen();
}

// ================= DELETE BOOK =================

void deleteBook()
{
    system("cls");

    string delBook;
    bool found = false;

    cout << "================ DELETE BOOK ================" << endl;

    clearInput(); 

    cout << "Enter Book Title: ";
    getline(cin, delBook);

    for (int i = 0; i < indexBooks; i++)
    {
        if (titleArray[i] == delBook)
        {
            found = true;

            
            char confirm;
            cout << "Are you sure you want to delete \"" << delBook << "\"? (y/n): ";
            cin >> confirm;

            if (confirm == 'y' || confirm == 'Y')
            {
                for (int j = i; j < indexBooks - 1; j++)
                {
                    titleArray[j]    = titleArray[j + 1];
                    authorArray[j]   = authorArray[j + 1];
                    genreArray[j]    = genreArray[j + 1];
                    priceArray[j]    = priceArray[j + 1];
                    stockArray[j]    = stockArray[j + 1];
                    soldArray[j]     = soldArray[j + 1];
                    ratingArray[j]   = ratingArray[j + 1];
                    discountArray[j] = discountArray[j + 1];
                }

                indexBooks--;
                saveData();

                cout << endl << "Book Deleted Successfully!" << endl;
            }
            else
            {
                cout << endl << "Deletion Cancelled." << endl;
            }

            break;
        }
    }

    if (!found)
    {
        cout << "Book Not Found!" << endl;
    }

    pauseScreen();
}

// ================= BEST SELLERS =================

void bestSeller()
{
    system("cls");

    cout << "================ BEST SELLERS ================" << endl;

    if (indexBooks == 0)
    {
        cout << "No Books Available!" << endl;
        pauseScreen();
        return;
    }

    
    int sortedIndex[100];
    for (int i = 0; i < indexBooks; i++)
        sortedIndex[i] = i;

   
    for (int i = 0; i < indexBooks - 1; i++)
    {
        for (int j = i + 1; j < indexBooks; j++)
        {
            if (soldArray[sortedIndex[i]] < soldArray[sortedIndex[j]])
            {
                int temp       = sortedIndex[i];
                sortedIndex[i] = sortedIndex[j];
                sortedIndex[j] = temp;
            }
        }
    }

    cout << endl;
    for (int i = 0; i < indexBooks; i++)
    {
        int idx = sortedIndex[i];
        cout << i + 1
             << ". "
             << titleArray[idx]
             << " | Sold: "
             << soldArray[idx]
             << " | Rating: "
             << ratingArray[idx]
             << endl;
    }

    pauseScreen();
}

// ================= REVENUE REPORT =================

void revenueReport()
{
    system("cls");

    float total = 0;

    cout << "================ REVENUE REPORT ================" << endl;

    if (indexBooks == 0)
    {
        cout << "No Books Available!" << endl;
        pauseScreen();
        return;
    }

    cout << endl;

    for (int i = 0; i < indexBooks; i++)
    {
        
        float finalPrice =
            priceArray[i] - (priceArray[i] * discountArray[i] / 100);

        float revenue = soldArray[i] * finalPrice;

        cout << titleArray[i]
             << " | Sold: " << soldArray[i]
             << " | Revenue: Rs." << revenue
             << endl;

        total += revenue;
    }

    cout << endl;
    cout << "================================" << endl;
    cout << "Total Revenue: Rs." << total      << endl;
    cout << "================================" << endl;

    pauseScreen();
}

// ================= LOW STOCK =================

void lowStock()
{
    system("cls");

    bool found = false;

    cout << "================ LOW STOCK ALERT ================" << endl;
    cout << "(Books with stock <= 2 are shown)" << endl << endl;

    for (int i = 0; i < indexBooks; i++)
    {
        if (stockArray[i] <= 2)
        {
            found = true;

            cout << titleArray[i]
                 << " | Remaining Stock: "
                 << stockArray[i]
                 << endl;
        }
    }

    if (!found)
    {
        cout << "All Books Have Sufficient Stock!" << endl;
    }

    pauseScreen();
}

// ================= FILTER BY GENRE =================

void filterGenre()
{
    system("cls");

    string genre;
    bool found = false;

    cout << "================ FILTER BY GENRE ================" << endl;

    clearInput(); 

    cout << "Enter Genre: ";
    getline(cin, genre);

    cout << endl;

    for (int i = 0; i < indexBooks; i++)
    {
        if (genreArray[i] == genre)
        {
            found = true;

            float finalPrice =
                priceArray[i] - (priceArray[i] * discountArray[i] / 100);

            cout << "- " << titleArray[i]
                 << " by " << authorArray[i]
                 << " | Price: Rs." << finalPrice
                 << " | Stock: " << stockArray[i]
                 << endl;
        }
    }

    if (!found)
    {
        cout << "No Books Found in Genre: " << genre << endl;
    }

    pauseScreen();
}

// ================= ADMIN MENU =================

void adminMenu()
{
    int choice;

    while (true)
    {
        system("cls");

        cout << "================ ADMIN MENU ================" << endl;
        cout << "1.  Show All Books"   << endl;
        cout << "2.  Search Book"      << endl;
        cout << "3.  Update Book"      << endl;
        cout << "4.  Best Sellers"     << endl;
        cout << "5.  Delete Book"      << endl;
        cout << "6.  Low Stock Alert"  << endl;
        cout << "7.  Revenue Report"   << endl;
        cout << "8.  Filter By Genre"  << endl;
        cout << "9.  Add Book"         << endl;
        cout << "10. Logout"           << endl;

        cout << endl << "Enter Choice: ";
        cin >> choice;

        if      (choice == 1)  showBooks();
        else if (choice == 2)  searchBook();
        else if (choice == 3)  updateBook();
        else if (choice == 4)  bestSeller();
        else if (choice == 5)  deleteBook();
        else if (choice == 6)  lowStock();
        else if (choice == 7)  revenueReport();
        else if (choice == 8)  filterGenre();
        else if (choice == 9)  addBook();
        else if (choice == 10) break;
        else
        {
            cout << "Invalid Choice!" << endl;
            pauseScreen();
        }
    }
}

// ================= CUSTOMER MENU =================

void customerMenu()
{
    int choice;

    while (true)
    {
        system("cls");

        cout << "================ CUSTOMER MENU ================" << endl;
        cout << "1. View All Books" << endl;
        cout << "2. Search Book"    << endl;
        cout << "3. Buy Book"       << endl;
        cout << "4. Exit"           << endl;

        cout << endl << "Enter Choice: ";
        cin >> choice;

        if      (choice == 1) showBooks();
        else if (choice == 2) searchBook();
        else if (choice == 3) buyBook();
        else if (choice == 4) break;
        else
        {
            cout << "Invalid Choice!" << endl;
            pauseScreen();
        }
    }
}

// ================= MAIN =================

int main()
{
    loadData();
    
    int choice;

    while (true)
    {
        header();

        cout << "1. Admin"    << endl;
        cout << "2. Customer" << endl;
        cout << "3. Exit"     << endl;

        cout << endl << "Enter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (adminLogin())
            {
                adminMenu();
            }
        }
        else if (choice == 2)
        {
            customerMenu();
        }
        else if (choice == 3)
        {
            cout << endl << "Thank You for using Book Store!" << endl;
            break;
        }
        else
        {
            cout << "Invalid Choice!" << endl;
            pauseScreen();
        }
    }

    return 0;
}