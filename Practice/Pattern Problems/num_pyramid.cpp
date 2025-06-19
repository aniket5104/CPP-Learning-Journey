//         1 
//       1 2 1 
//     1 2 3 2 1
//   1 2 3 4 3 2 1
#include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"  ";
        }
        int num=1;
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        int dig=i;
        for(int j=0;j<i;j++){
            cout<<dig<<" ";
            dig--;
        }
        cout<<"\n";
    }
    return 0;
}