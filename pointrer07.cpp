#include <iostream>

using namespace std;
int add(int,int);
int dif(int,int);
int mul(int,int);
int main()
{
    int (*Fptr)(int,int);
    Fptr = dif;
    cout<<(*Fptr)(4,5)<<endl;
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