#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec1={1,2,3,4,5};
    int size1 = vec1.size();// gets the size of vector
    vec1.push_back(23);
    cout<<vec1.size()<<endl;
    return 0;
}