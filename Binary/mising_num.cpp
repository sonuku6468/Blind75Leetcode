#include<bits/stdc++.h>

using namespace std;
int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int expSum = (n*(n+1))/2;
        int Asum=0;
        for(int i=0;i<nums.size();i++){
             Asum=Asum+nums[i];
        
        }
        return expSum-Asum;
    }
int main()
{
    vector<int> v={0,1,3};
    cout<<missingNumber(v);
    
    return 0;
}