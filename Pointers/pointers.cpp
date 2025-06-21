#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr= &a;
    int **ptr2ptr=&ptr;
    cout<<"Adress of a "<<ptr;
    cout<<"\nValue in a "<<*ptr;
    cout<<"\nAddress of ptr "<<ptr2ptr;
    cout<<"\nValue in ptr "<<*ptr2ptr;
    return 0;
}