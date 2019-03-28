#include <iostream>
using namespace std;

int main (){
    int c=9;
    int A[]={1,4,2,5,10};
    int B[]={7,11,8,4,16};
    int *pAB[]={A,B,&c};
    cout<<pAB[0]<<" "<<&A[0]<<endl;
    cout<<pAB[1]<<" "<<&B[0]<<endl;
    cout<<&pAB[0]<<" "<<pAB<<endl;
    cout<<*(pAB[1]+4);
    return 0;
}