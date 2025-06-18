// Write a function to calculate factorial of a number.
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter a no.";
    cin>>n;
    cout<<"The factorial of "<<n<<"is "<<factorial(n);
    return 0;

}