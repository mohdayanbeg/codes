// // Normal array Method
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,x;
//     cin>>n>>x;
//     int a[n],b[n]={0};
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++)
//     {
//         b[(i+x)%n]=a[i];
//     }
//  for(int i=0;i<n;i++)
//     {
//         cout<<b[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void print(vector<int> v,int n){
    for (int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
void rotate(vector<int> v,int k)
{
    vector<int> temp(v.size());
    for (int i=0;i<v.size();i++)
    {
        temp[(i+k)%v.size()]=v[i];
    }
    print(temp,v.size());
}
int main()
{
    int n,a,x;
    vector<int> v;
    cin>>n>>x;
    for(int i=0 ; i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    rotate(v,x);
}
