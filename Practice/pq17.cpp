// WAP to print all unique values in an array
#include<iostream>
using namespace std;
void printUnique(int arr[],int size){
    for (int i=0;i<size;i++){
        int key=arr[i];
        int count=0;
        for (int j=0;j<size;j++){
            if(arr[j]==key){
                count++;
            } 
        }
        if (count==1){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int size=6;
    int arr[size]={98,34,98,21,34,90};
    printUnique(arr,size);
    return 0;

}