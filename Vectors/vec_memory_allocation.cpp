#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);//10,20,30 ---> size 3
    v.push_back(40);
    cout<< v.size()<<endl;
    cout<<v.capacity()<<endl;
    return 0;
}  