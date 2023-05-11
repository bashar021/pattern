    //    *
    //   ***
    //  *****
    // *******
    //  *****
    //   ***
    //    *


#include <iostream>
using namespace std;
int main()
{
    cout << "please enter the odd  number of height = ";
    int a;
    cin >> a;
    int space = a;
    int star = 1;
    int half_section = (a / 2) ;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int x = 0; x < star; x++)
        {
            cout << "*";
        }
        if (i < half_section)
        {
            star = star + 2;
            space--;
            cout << "\n";
        }
        else
        {
            star = star - 2;
            space++;
            cout << "\n";
            // cout<<"hi";
        }
    }
}