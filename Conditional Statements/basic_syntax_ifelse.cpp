#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if (n<0){
        cout<<"Negative";
    }
    else if(n>0){
        cout<<"Positive";
    }
    else{
        cout<<"zero";
    }
    return 0;
}
