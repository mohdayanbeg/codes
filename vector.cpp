// basic of vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector <datatype> identifier;
    vector<int> v;
    vector<int> a(5);
    // v.push_back(10);
    // v.size();
    // v.capacity();
    // v.push_back(20);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // 
    a.push_back(20);
    a.push_back(30);
    a.push_back(10);
    a.push_back(40);
    a.push_back(50);
    for(auto i:v){
        cout<<i<<endl;
    }
    for(auto i:a){
        cout<<i<<endl;
    }
    cout<<v.capacity()<<endl;
    cout<<a.capacity();
}