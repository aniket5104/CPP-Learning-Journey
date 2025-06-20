// WAP to print intersection of two arrays.
#include <iostream>
using namespace std;
bool search(int key,int arr[],int size){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return true;
        }
    }
    return false;
}
void intersectionOfArray(int arr1[],int arr2[],int size1, int size2){
    for(int i=0;i<size1;i++){
        int key=arr1[i];
        if (search(key,arr2,size2)){
            cout<<arr1[i]<<" ";
        }
    }
}

int main() {
    int size1=6,size2=6;
    int arr[size1]={34, 87,29, 90, 65, 46};
    int arr2[size2]={32, 89, 87, 47,90,91};
    intersectionOfArray(arr,arr2,size1,size2);
    return 0;
}