#include <iostream>
using namespace std;
typedef int* pint;
int main (){
    int m=30,n=5;
    pint pm;
    pint pn;
    pm = &m;
    pn = &n;
    pm = pn;
    double x;
    double *px;
    cout <<&m<<" "<<pm<<" "<<&n<<" "<<pn<<endl;
    cout <<m<<" "<<*pm<<endl;
    cout<<sizeof(long)<<" "<<sizeof(pn)<<endl;
    cout<<*pm **pn<<endl;
    return 0;
}