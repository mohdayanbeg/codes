// #include<iostream>
// using namespace std;
// int main(){
//     int n,k=0,c=0;
//     cin>>n;
//     int a[n],b[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]>a[i+1]){
//             k=n-i-1;
//             break;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         b[(i+k)%n]=a[i];
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         if(b[i]>b[i+1]){
//             c++;
//         }
//     }
//     if(c==0){
//         cout<<true;
//     }
//     else{
//         cout<<false;
//     }
// }