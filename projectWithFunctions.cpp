#include <iostream>
#include <conio.h>
using namespace std;

// -------- GLOBAL DATA --------
int index = 7;

string titleArray[1000] = {"Alchemist", "Hamlet", "Harry Potter", "Kite Runner", "The Hobbit", "1984", "To Kill a Mocking Bird"};
string authorArray[1000] = {"Paulo", "Shakespeare", "Rowling", "Khalid Hoseni", "Tolkien", "Orwell", "Harper Lee"};
string genereArray[1000] = {"Philosophical fiction", "Drama", "Fantasy", "Historical Fiction", "Fantasy", "Dystopian", "Historical Fiction"};
float priceArray[1000] = {500, 1200, 3500, 800, 1500, 600, 2500};
int stockArray[1000] = {10, 5, 2, 20, 15, 7, 6};
int soldArray[1000] = {15, 1, 50, 10, 7, 4, 3};
float ratingArray[1000] = {4.0, 4.5, 4.9, 4.8, 3.9, 4.6, 4.4};
float discountArray[1000] = {0, 10, 0, 5, 15, 0, 5};

// -------- FUNCTION DECLARATIONS --------
void showBooks();
void searchBook();
void updateBook();
void bestSellers();
void deleteBook();
void lowStock();
void applyDiscount();
void revenueReport();
void filterGenre();
void addBook();
void buyBook();

void adminMenu();
void customerMenu();

// -------- FUNCTIONS --------

void showBooks()
{
    system("cls");
    cout << "ALL BOOKS\n";
    for (int i = 0; i < index; i++)
    {
        if (titleArray[i] != " " && titleArray[i] != "")
        {
            cout << i+1 << ". " << titleArray[i] << " | " << authorArray[i]
                 << " | " << genereArray[i] << " | " << priceArray[i]
                 << " | Stock: " << stockArray[i]
                 << " | Sold: " << soldArray[i]
                 << " | Rating: " << ratingArray[i]
                 << " | Discount: " << discountArray[i] << "%\n";
        }
    }
    getch();
}

void searchBook()
{
    string title;
    cout << "Enter title: ";
    cin >> title;

    bool found = false;
    for (int i = 0; i < index; i++)
    {
        if (titleArray[i] == title)
        {
            found = true;
            cout << titleArray[i] << " | " << authorArray[i] << endl;
        }
    }
    if (!found) cout << "Not found\n";
    getch();
}

void updateBook()
{
    string title;
    cout << "Enter title to update: ";
    cin >> title;

    for (int i = 0; i < index; i++)
    {
        if (titleArray[i] == title)
        {
            cout << "Enter new title: "; cin >> titleArray[i];
            cout << "Enter author: "; cin >> authorArray[i];
            cout << "Enter genre: "; cin >> genereArray[i];
            cout << "Enter price: "; cin >> priceArray[i];
            cout << "Enter stock: "; cin >> stockArray[i];
            cout << "Enter sold: "; cin >> soldArray[i];
            cout << "Enter rating: "; cin >> ratingArray[i];
            cout << "Enter discount: "; cin >> discountArray[i];
            cout << "Updated!\n";
        }
    }
    getch();
}

void bestSellers()
{
    for (int i = 0; i < index; i++)
    {
        for (int j = i+1; j < index; j++)
        {
            if (soldArray[i] < soldArray[j])
            {
                swap(titleArray[i], titleArray[j]);
                swap(soldArray[i], soldArray[j]);
            }
        }
    }

    cout << "BEST SELLERS:\n";
    for (int i = 0; i < index; i++)
        cout << titleArray[i] << " Sold: " << soldArray[i] << endl;

    getch();
}

void deleteBook()
{
    string title;
    cout << "Enter title: ";
    cin >> title;

    for (int i = 0; i < index; i++)
    {
        if (titleArray[i] == title)
        {
            titleArray[i] = " ";
            cout << "Deleted!\n";
        }
    }
    getch();
}

void lowStock()
{
    cout << "LOW STOCK (<5):\n";
    for (int i = 0; i < index; i++)
    {
        if (stockArray[i] < 5 && titleArray[i] != " ")
            cout << titleArray[i] << endl;
    }
    getch();
}

void applyDiscount()
{
    string title;
    cout << "Enter title: ";
    cin >> title;

    for (int i = 0; i < index; i++)
    {
        if (titleArray[i] == title)
        {
            cout << "Enter discount: ";
            cin >> discountArray[i];
        }
    }
    getch();
}

void revenueReport()
{
    float total = 0;
    for (int i = 0; i < index; i++)
    {
        float revenue = soldArray[i] * priceArray[i];
        total += revenue;
    }
    cout << "Total Revenue: " << total << endl;
    getch();
}

void filterGenre()
{
    string g;
    cout << "Enter genre: ";
    cin >> g;

    for (int i = 0; i < index; i++)
    {
        if (genereArray[i] == g)
            cout << titleArray[i] << endl;
    }
    getch();
}

void addBook()
{
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

    cout << "Added!\n";
    getch();
}

void buyBook()
{
    string title;
    cout << "Enter book: ";
    cin >> title;

    for (int i = 0; i < index; i++)
    {
        if (titleArray[i] == title && stockArray[i] > 0)
        {
            stockArray[i]--;
            soldArray[i]++;
            cout << "Purchased!\n";
        }
    }
    getch();
}

// -------- MENUS --------

void adminMenu()
{
    while (true)
    {
        system("cls");
        cout << "ADMIN MENU\n";
        cout << "1.Show\n2.Search\n3.Update\n4.Best Sellers\n5.Delete\n6.Low Stock\n7.Discount\n8.Revenue\n9.Filter\n10.Add\n11.Exit\n";

        int op;
        cin >> op;

        if (op == 1) showBooks();
        else if (op == 2) searchBook();
        else if (op == 3) updateBook();
        else if (op == 4) bestSellers();
        else if (op == 5) deleteBook();
        else if (op == 6) lowStock();
        else if (op == 7) applyDiscount();
        else if (op == 8) revenueReport();
        else if (op == 9) filterGenre();
        else if (op == 10) addBook();
        else if (op == 11) break;
    }
}

void customerMenu()
{
    while (true)
    {
        system("cls");
        cout << "CUSTOMER MENU\n";
        cout << "1.View\n2.Search\n3.Buy\n4.Exit\n";

        int op;
        cin >> op;

        if (op == 1) showBooks();
        else if (op == 2) searchBook();
        else if (op == 3) buyBook();
        else if (op == 4) break;
    }
}

// -------- MAIN --------
int main()
{
    while (true)
    {
        system("cls");
        cout << "1.Admin\n2.Customer\n3.Exit\n";

        int choice;
        cin >> choice;

        if (choice == 1) adminMenu();
        else if (choice == 2) customerMenu();
        else break;
    }
}