#include <iostream>
using namespace std;
main()
{
    float vegPricePerKg, fruitPricePerKg;
    int totalKgOfVeg, totalKgOfFruit;
    float totalCoins, totalRps;
    cout << "Enter vegetable price per kilogram(in coins): ";
    cin >> vegPricePerKg;

    cout << "Enter fruit price per kilogram(in coins): ";
    cin >> fruitPricePerKg;

    cout << "Enter total kilograms of vegetables: ";
    cin >> totalKgOfVeg;
    
    cout << "Enter total kilograms of fruits: ";
    cin>> totalKgOfFruit;
    totalCoins = (vegPricePerKg * totalKgOfVeg) + (fruitPricePerKg * totalKgOfFruit);
    cout<< "Total earnings in rupees(Rps): "<<totalRps;
}