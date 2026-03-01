#include <iostream>
using namespace std;
main()
{
    float weight, price, area, pricePerPound, costPerSquareFoot;

    cout << "Enter the size of Fertilizer bag in pounds: ";
    cin >> weight;

    cout << "Enter the cost of the bag: ";
    cin >> price;

    cout << "Enter the area in square feet that can be covered by the bag: ";
    cin >> area;

    pricePerPound = price / weight;
    costPerSquareFoot = price / area;

    cout << "Cost of fertilizer per pound: " << pricePerPound << endl;
    cout << "Cost of fertilizing per square foot: " << costPerSquareFoot << endl;
}