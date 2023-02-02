#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Normal array method
// int main(){
//     int n;
//     cin>>n;
//     int a[n],b[n];
//     for (int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         b[i]=a[n-i-1];
//         cout<<b[i]<<" ";
//     }
//     return 0;
// }


vector<int> reverse(vector<int> a)
{
    int s=0,e=a.size()-1;
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
    int n,i=0,a;
    cin>>n;
    while(i<n){
        cin>>a;
        v.push_back(a);
        i++;
    }


    vector<int> rev= reverse(v);

    for(int i=0;i<n;i++){
        cout<<rev[i]<<" ";
    }

    return 0;
}

