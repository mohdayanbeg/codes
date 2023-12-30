#include<iostream>
using namespace std;
bool checkSorted(int arr[],int n,int index){
    if(index>=n) return true;

    if(arr[index]>arr[index-1]) checkSorted(arr,n,index+1);

    else return false;

    
}
int main(){
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<checkSorted(arr,n,1)?true:false;
    return 0;
}