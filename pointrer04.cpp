#include <iostream>
using namespace std;

int main (){
    int A[]={1,4,2,3,5,10};
    int *pA;
    pA = A;
    *(pA+1) = 9; //menginisialisasi nilai A[1]=9
    for(int i=0;i<6;i++)
        cout<<*(pA+i)<<endl;
        return 0;
}