// Write a function to find the maximum of 3 numbers.
#include<iostream>
using namespace std;

int max_of_3(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a,b,c;
    cout<<"Enter 3 no.s: ";
    cin>>a>>b>>c;
    int max=max_of_3(a,b,c);
    cout<<"The maximum of "<<a<<","<<b<<","<<c<<" is "<<max;
    return 0;
}