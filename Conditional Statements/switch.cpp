#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"Enter two no.s: ";
    cin>>a>>b;
    cout<<"Enter the operator('+','-','*','%')";
    cin>>op;

    switch(op){

        case '+':
            cout<<"sum= "<<a+b;
            break;

        case '-':
            cout<<"Difference= "<<a-b;
            break;

        case '*':
            cout<<"Product: "<<a*b;
            break;

        case '/':
            if(b!=0){
                cout<<"Quotient: "<<a/b;
                break;
            }
            else{
                cout<<"Zero Division Error!";
            }

        case '%':
            cout<<"Remainder: "<<a%b;
            break;

        default:
            cout<<"Invalid Operator!";
    }
    return 0;
}