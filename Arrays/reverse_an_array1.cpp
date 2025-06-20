#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int st=0,end=size-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}

int main(){
    int size=6;
    int arr[size]={91,23,76,94,57,86};
    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}