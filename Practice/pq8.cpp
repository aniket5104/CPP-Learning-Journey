// Write a function to check if a number is prime or not.
#include<iostream>
using namespace std;

void isPrime(int a){
    int count=0;
    if(a>=0){
        if (a==1 || a==0){
            cout<<a<<" is neither prime nor composite";
        }
        else{
            for(int i=1;i<=a;i++){
                if(a%i==0){
                    count++;
                }
            }
            if (count==2){
                cout<<a<<" is a prime no.";
            }
            else{
                cout<<a<<" is a composite no.";
            }
        }

    }
    else{
        cout<<"Invalid Input";
    }


}

int main(){
    int n;
    cout<<"Enter a no.";
    cin>>n;
    isPrime(n);
    return 0;
}