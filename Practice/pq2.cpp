//Take your name as input and print: Hello <name>!

#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name";
    //cin>>name;
    getline(cin,name);
    cout<<"hello "<<name<<" !";
    return 0;

}