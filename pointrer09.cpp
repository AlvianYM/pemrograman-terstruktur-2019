#include <iostream>

using namespace std;
int add(int,int);
int dif(int,int);
int mul(int,int);
int call(int(*)(int,int),int, int);
int main()
{
    // int (*Fptr[])(int,int)={add,dif,mul};
    // for (int i=0;i<3;i++)
    // cout<<Fptr+i<<endl;
    cout<<call(mul,5,6)<<endl;
    return 0;
}
int add (int a, int b) {
    return a+b;
}
int dif(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
int call(int (*Func)(int x, int y), int a, int b){
    return (*Func)(a,b);
}
