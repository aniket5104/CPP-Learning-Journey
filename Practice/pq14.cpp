// Search for an element and print its index (or -1 if not found).
#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,4,6,8,1,0};
    int element;
    cout<<"Enter the element to search: ";
    cin>>element;
    int i;
    for(i=0;i<6;i++){
        if(arr[i]==element){
            cout<<element<<" found at index "<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}