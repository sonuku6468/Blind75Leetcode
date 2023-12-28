#include<iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
        long long temp =nums[0];
        long long maxEnd =nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxEnd=max(maxEnd+nums[i],(long long) nums[i] );
            temp=max(temp,maxEnd);
        }
        return temp;
}
int main()
{
    vector<int> v={-2,1,-3,4,-1,2,1,-5,4};
    cout<<"The maximum sum of the subarray is "<<maxSubArray(v)<<endl;
    return 0;
    
}