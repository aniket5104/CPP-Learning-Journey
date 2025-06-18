// Count the frequency of a number in the array.
#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,3,4,2,2};
    int element=2;
    int count=0;
    int i;
    for(i=0;i<5;i++){
        if(arr[i]==element){
            count++;
        }
    }
    float freq=count/5.0;
    cout<<"The frequency of "<<element<<" is "<<freq;
    return 0;
}