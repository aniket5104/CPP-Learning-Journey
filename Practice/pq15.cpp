// Find the sum of all elements in the array.
#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,4,8,2,9};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<"The sum of elements of the array is "<<sum;
    return 0;
}