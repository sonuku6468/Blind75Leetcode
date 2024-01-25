#include<bits/stdc++.h>
using namespace std;
int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }

        vector<int> s0(2, 0);
        vector<int> s1(2, 0);
        s1[0] = nums[0];

        for (int i = 1; i < n; i++) {
            s0[i % 2] = max(s0[(i - 1) % 2], s1[(i - 1) % 2]);
            s1[i % 2] = s0[(i - 1) % 2] + nums[i];
        }

        return max(s0[(n - 1) % 2], s1[(n - 1) % 2]);
    }
int main()
{
    //code
    vector<int> v = {1,3,4,5};
     vector<int> v2 = {1,2,3,1};
    cout << "Maximum amount of money that can be robbed in the given array is: "<<rob(v)<<endl;
cout << "Maximum amount of money that can be robbed in the given array is: "<<rob(v2)<<endl;
    return 0;
}