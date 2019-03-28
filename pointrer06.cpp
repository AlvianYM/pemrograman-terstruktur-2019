#include <iostream>

using namespace std;

int main()
{
    int A[3][2]={{3,2},{8,3},{5,6}};
    int (*pA) [2]=A;
    // cout<<*(*(pA))<<endl;
    // cout<<*(*(A))<<endl;
    // cout<<*(*(pA+0)+1)<<endl;
    // cout<<A[0][1]<<endl;
    for (int i=0; i<3;i++){
    for (int j=0;j<2;j++)
        cout<<*(*(pA+i)+j)<<" ";
        cout <<endl;
    }    
    return 0;
}