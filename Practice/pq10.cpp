// Write a function that takes a character and returns if it’s a vowel.
#include<iostream>
using namespace std;

void isVowel(char a){
    if(a>='A' && a<= 'z'){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'|| a=='U'){
            cout<<a<<" is a vowel";
        }
        else{
            cout<<a<<" is not a vowel";
        }
    }
    else{
        cout<<"Please Enter a Valid character";
    }
}

int main(){
    char a;
    cout<<"Enter a character";
    cin>>a;
    isVowel(a);
    return 0;
}