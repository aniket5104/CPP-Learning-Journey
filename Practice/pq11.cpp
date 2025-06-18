// Take n elements input from the user and print them in reverse.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of input you want to give";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cout<<"\nEnter the "<<i<<"th element of the array";
        cin>>arr[i];
    }
    cout<<"The reverse array of your input is:\n";
    for(int i=n;i>=1;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}