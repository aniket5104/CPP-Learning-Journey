// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
#include<iostream>
using namespace std;
int main(){
    int n=8;//length of wing of butterfly
    int half_len=n/2;
    for(int i=0;i<half_len;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=i;j<half_len-1;j++){
            
            cout<<"  ";
        }
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
        cout<<"\n";
    }
    for(int i=0;i<half_len;i++){
        for(int j=i;j<half_len;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=i;j<half_len;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}