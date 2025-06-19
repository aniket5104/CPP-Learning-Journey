//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *
#include<iostream>
using namespace std;

int main(){
    int n=4;//length of side of a diamond
    for(int i=0;i<n;i++){
        for(int j=n;j>i+1;j--){
            cout<<" ";
        }
        cout<<"*";
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<i-1;j++){
            cout<<" ";
        }
        if(i>0){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j=i;j<n-2;j++){
            cout<<" ";
        }
        for(int j=i;j<n-3;j++){
            cout<<" ";
        }
        if(i<n-2){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}