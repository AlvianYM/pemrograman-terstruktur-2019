#include <iostream>
using namespace std;

int main (){
    int x=10, y=15;
    // operator refference & 
    // operator derefference *
    // int a,b=10;
    // a = b;
    // b = 12;

    int *pX;
    pX = &y;
    y = 20;
    *pX = 40;

    cout<<"Alamat y "<<(long) pX<<" nilai y "<<y;
    return 0;
}