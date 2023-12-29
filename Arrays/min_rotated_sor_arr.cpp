#include<bits/stdc++.h>
using namespace std;
 int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
    }
int main()
{
    
    vector<int> nums = {4,5,6,7,0,1,2};
    cout << "The minimum element in the array is: "<<findMin(nums);
    return 0;
}