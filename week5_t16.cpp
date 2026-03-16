#include<iostream>
using namespace std;
 main()
{
    for(int rows = 5; rows >= 1; rows--)
    {
        for(int cols = rows; cols >= 1; cols--)
        {
            cout << cols << " ";
        }
        cout << endl;
    }

    return 0;
}