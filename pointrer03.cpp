#include <iostream>
using namespace std;

int main (){
    int x=10;
    int *pX;
    int **ppX;
    int ***pppX;
    
    pX = &x;
    ppX= &pX;
    pppX = &ppX;
    cout<<"\n1. x : "<<x;
    cout<<"\n2. pX : "<<pX<<" = "<<&x;
    cout<<"\n3. ppX : "<<ppX<<" = "<<&pX;
    cout<<"\n4. pppX : "<<pppX<<" = "<<&ppX;

    cout<<endl<<***pppX***ppX**pX;

    return 0;
}