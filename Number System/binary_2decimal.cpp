#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,bin;
    cout<<"Enter a Binary Number: ";
    cin>>n;
    bin=n;
    int dec=0;
    int i=0;
    while(bin!=0){
        int rem=bin%10;
        dec+=rem*pow(2,i);
        bin/=10;
        i++;
    }
    cout<<"The decimal form of "<<n<<" is"<<dec;
    return 0;
}