//Check if a number is prime.
#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cout<<"Enter the no. :";
    cin>>n;
    if(n==1 || n==0){ 
        cout<<n<<" is neither prime nor composite";
        return 0;
    }
    else{   
        for (int i=1;i<=n;i++){
            if (n%i==0){
                count++;
            }
        }
    }
    if (count==2){
        cout<<n<<" is a prime no.";
    }
    else{
        cout<<n<<" is not a prime no.";
    }
    return 0;

}