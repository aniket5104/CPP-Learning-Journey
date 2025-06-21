#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec1={1,2,3,4,5};
    int size1 = vec1.size();// gets the size of vector
    vec1.push_back(23); // adds the element at the end of the vector
    vec1.pop_back();
    cout<<vec1.size()<<endl;
    cout<<vec1.front()<<endl;
    cout<<vec1.back()<<endl;
    cout<<vec1.at(2);
    return 0;
}