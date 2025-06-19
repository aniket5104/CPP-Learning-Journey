// 1234...n
// 1234..n
// .....n times
// 1234...n
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    for(int i= 0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}