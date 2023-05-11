#include<iostream>
#include<vector>
using namespace std;
int n1,n2;
int ans(int i,int j,vector<int>& nums1,vector<int>& nums2)
{
    if(i>=n1 ||j>=n2)return 0;
    if(nums1[i]==nums2[j])
    {
        return 1+ans(i+1,j+1,nums1,nums2);
    }
    else{
        return max(ans(i+1,j,nums1,nums2),ans(i,j+1,nums1,nums2));
    }

}
int main()
{
    vector<int> nums1;
    vector<int> nums2;
    int a;
    cin>>n1>>n2;
    for(int i=0;i<n1;i++){
        cin>>a;
        nums1.push_back(a);
    }
    for(int i=0;i<n2;i++){
        cin>>a;
        nums2.push_back(a);
    }

    cout<< ans(0,0,nums1,nums2);
    
}