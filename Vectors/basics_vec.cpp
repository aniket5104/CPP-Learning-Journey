#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec1={1,2,3,4,5};
    vector <int> vec2(3,0);
    for(int each : vec1){ // each is an iterator which is of same data type as of vec1
        cout<< each <<endl;
    }
    for(int each : vec2){
        cout << each << endl;
    }
    return 0;
}