//Find the index of maximum and minimum element in an array.
#include<iostream>
using namespace std;

int main(){
    int size=6;
    int arr[size]={45, 2,65,35,75,19};
    int minVal=arr[0];
    int maxVal=arr[0];
    int minValIdx=0;
    int maxValIdx=0;
    int i;
    for(i=0;i<size-1;i++){
        if(maxVal<arr[i+1]){
            maxVal=arr[i+1];
            maxValIdx=i+1;
        }
        if(minVal>arr[i+1]){
            minVal=arr[i+1];
            minValIdx=i+1;
        }
    }
    cout<<"The index of the smallest element of array is "<<minValIdx<<endl;
    cout<<"The index of the largest element of array is "<<maxValIdx;
    return 0;
}