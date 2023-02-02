#include<iostream>
using namespace std;
int main(){

    int n,temp=0;
    cin>>n;
    int a[n],b[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
        int i=0;
            for(int j=0;j<n;j++){
                if(a[j]!=0)
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                    i++;
                }

        }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}