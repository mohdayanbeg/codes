// Normal Array Method..
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m,temp;
//     cin>>n>>m;
//     int a[n],b[m],c[n+m]={0};
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<m;i++){
//         cin>>b[i];
//     }
//     // merging
//     for(int i=0;i<n;i++){
//         c[i]=a[i];
//     }
//     for(int i=0;i<m;i++){
//         c[i+n]=b[i];
//     }
//     // sorting
//     for (int i=0;i<n+m-1;i++){
//         for(int j=0;j<n+m-i-1;j++){
//             if(c[j]>c[j+1]){
//                 temp=c[j];
//                 c[j]=c[j+1];
//                 c[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n+m;i++){
//         cout<<c[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void print(int c[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
}


void merge(int a[],int n,int b[],int m,int c[])
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<n){
        c[k++]=a[i++];
    }
    while(j<m){
        c[k++]=b[j++];
    }
    print(c,n+m);
}


int main()
{
    int n,m,temp;
    cin>>n>>m;
    int a[n],b[m],c[n+m]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    merge(a,n,b,m,c);

    return 0;
}
