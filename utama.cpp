#include <iostream>
#include <math.h>

using namespace std;
struct Bola {
    double r;
};

struct ListBola{
    Bola b;
    ListBola *next;
};

ListBola *head=NULL;

bool isEmpty(){
    return head==NULL;
}

void tambahDepan(double rBola){
    ListBola *baru=new ListBola();
    baru->b.r=rBola;
    baru->next=NULL;

    if (isEmpty()){
        head=baru;
        // cout<<"kosong\n";
    } else {
        // cout<<"baru\n";
        baru->next = head;
        head = baru;
    }
}

void tambahBelakang(double rBola){
    ListBola *baru=new ListBola();
    baru->b.r=rBola;
    baru->next=NULL;

    if (isEmpty()){
        head=baru;
        // cout<<"kosong\n";
    } else {
        ListBola *bantu;
        bantu=head;
        while (bantu->next !=NULL){
            bantu=bantu->next;
        }
        bantu->next=baru;
    }
}
void cetakList(){
    if (isEmpty()){
        cout<<"List Kosong\n";
    } else {
        ListBola *bantu;
        bantu=head;
        while (bantu !=NULL){
            cout<<bantu->b.r<<endl;
            bantu=bantu->next;
        }
    }
}
int main()
{
    tambahDepan(3);
    tambahDepan(7);
    tambahBelakang(5);
    tambahDepan(10);
    tambahBelakang(10);
    tambahBelakang(13);
    tambahBelakang(19);

    // cout<<head->next->b.r;
    cetakList();
    return 0;
}