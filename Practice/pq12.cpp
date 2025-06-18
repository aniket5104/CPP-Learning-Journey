//Find the maximum and minimum element in an array.
#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,5,7,4,0};
    int maxVal=arr[0];
    int minVal=arr[0];
    for(int i=0;i<5;i++){
        if (maxVal<arr[i]){
            maxVal=arr[i];
        }
    }
    for (int i=0;i<5;i++){
        if(minVal>arr[i]){
            minVal=arr[i];
        }
    }
    cout<<"The maximum elemnet of array is "<<maxVal;
    cout<<"The minimum element of array is "<<minVal;
    return 0;
}
