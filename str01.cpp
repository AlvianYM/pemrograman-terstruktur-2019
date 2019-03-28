#include <iostream>

using namespace std;
int main()
{
    char nama[]="Unila Bandar Lampung";
    char *ps;
    ps = nama;

    int A[]={1,2,3};
    int *pA;

    pA = A;
    while (*ps !='\0'){
        // if (*(++ps)=='i')
        cout<<*(ps++)<<endl;
    }
    return 0;
}