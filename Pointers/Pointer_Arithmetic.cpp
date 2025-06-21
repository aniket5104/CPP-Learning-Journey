#include<iostream>
using namespace std;

int main(){
    int a[]={10,20,30,40,50};
    int* ptr=a;
    cout<<*ptr<<endl;
    ptr++; //pointer strats pointing to next next index
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    ptr++;
    return 0;
}