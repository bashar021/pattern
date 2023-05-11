//     * 
//    ***
//   *****
//  *******
// *********

#include<iostream>
using namespace std;
int main(){
    cout<<"please eneter your value = ";
    int a ;
    cin>>a;
    int space = a;
    int star  = 1;
    for(int i = 0; i< a ; i++){
        for(int j  = 0; j< space;j++){
            cout<<" ";
        }
        for(int x = 0; x < star ;x++){
            cout<<"*";
        }
        star = star+2;
        space--;
        cout<<"\n";
    }
}
