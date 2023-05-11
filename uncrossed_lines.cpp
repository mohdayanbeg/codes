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
    nums1={5,1,2,5,1,2,2,3,1,1,1,1,1,3,1};
    nums2={2,5,1,3,4,5,5,2,2,4,5,2,2,3,1,4,5,3,2,4,5,2,4,4,2,2,2,1,3,1};
    n1=nums1.size();
    n2=nums2.size();

    cout<< ans(0,0,nums1,nums2);
    
}