// A A A A 
//   B B B 
//     C C
//       D

#include<iostream>
using namespace std;

int main(){
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=i;j<n;j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<"\n";
    }
    return 0;
}