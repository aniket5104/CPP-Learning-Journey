// 1 
// 2 1
// 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        int num=i+1;
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num--;
        }
        cout<<"\n";
    }
    return 0;
}