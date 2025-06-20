#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int size=6;
    int arr[size]={23, 56, 87, 34, 19, 27};
    
    int key_idx=linearSearch(arr,size,87);
    if (key_idx==-1){
        cout<<"Element not found in Array";
    }
    else{
        cout<<"Element found at index "<<key_idx;
    }
    return 0;
}