// Print all even numbers from 1 to n.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a no.: ";
    cin>>n;
    cout<<"All even no.s from 1 to "<<n<<" are:-";
    for(int i=1;i<=n;i++){
        if (i%2==0){
            cout<< i<<" ";
        }
    }
    return 0;
}