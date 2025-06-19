// A B C D
// A B C D
// A B C D
// A B C D
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows";
    cin>>n;
    for(int i=0;i<n;i++){
        char ch='A';
        for(char j=ch;j<ch+n;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}