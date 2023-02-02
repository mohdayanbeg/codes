#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> a,int z)
{
    int s=z+1,e=a.size()-1;
    while(s<=e)
    {
        swap(a[s],a[e]);
        s++;
        e--;
    }
    return a;
}
int main(){

    vector<int> v;
    int z,n,i=0,a;
    cin>>n;
    cin>>z;
    while(i<n){
        cin>>a;
        v.push_back(a);
        i++;
    }


    vector<int> rev= reverse(v,z);

    for(int i=0;i<n;i++){
        cout<<rev[i]<<" ";
    }

    return 0;
}