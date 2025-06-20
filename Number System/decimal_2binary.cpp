#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,dec;
    cout<<"Enter a decimal number: ";
    cin>>n;
    dec=n;
    int bin=0;
    int i=0;
    while(dec!=0){
        int rem=dec%2;
        bin+=rem*pow(10,i);
        dec=dec/2;
        i++;
    }
    cout<<"Binary of "<<n<<" is "<<bin;
    return 0;
}