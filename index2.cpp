// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter your value = ";
    cin>>a;
    int star = a;
    for(int i = 0;i< a ;i++){
        for(int x  = 0 ; x<star ;x++){
            cout<<"*";

        }
        cout<<"\n";
        star--;
    }


}