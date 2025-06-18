#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of the array";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){//Input 
        cout<<"\nEnter the "<<i<<"th element of the array";
        cin>>arr[i];
    }
    cout<<"The elements of the array are: ";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}