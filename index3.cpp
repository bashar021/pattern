// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
#include <iostream>
using namespace std;
int main()
{
    cout << "enter odd  value = ";
    int a;
    cin >> a;
    int firstphase = (a / 2) + 1;
    int firstphase_star = 1;
    int secondphase_star = firstphase;
    for (int i = 0; i < a; i++)
    {
        if (firstphase_star < firstphase)
        {
            for (int x = 0; x < firstphase_star; x++)
            {
                cout << "*";
            }
            firstphase_star++;
        }else{
            for(int j  = 0 ;j< secondphase_star;j++){
                cout<<"*";
            }
            secondphase_star--;
        }
        cout << "\n";
    }
}

