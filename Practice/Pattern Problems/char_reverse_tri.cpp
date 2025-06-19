// A 
// B A
// C B A
// D C B A
#include<iostream>
using namespace std;
int main(){
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){
        char ch1= ch+i;
        for(int j=0;j<=i;j++){
            cout<<ch1<<" ";
            ch1--;
        }
        cout<<"\n";
    }
    return 0;
}