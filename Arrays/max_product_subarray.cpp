
#include<bits/stdc++.h>
using namespace std;
  int maxProduct(vector<int>& arr) {
        int n = arr.size(); //size of array.
    int pre = 1, suff = 1;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (pre == 0) pre = 1;
        if (suff == 0) suff = 1;
        pre *= arr[i];
        suff *= arr[n - i - 1];
        ans = max(ans, max(pre, suff));
    }
     return ans;
    }
int main()
{
    vector<int>vect={2,3,-2,4};
    int result=maxProduct(vect);
    cout<<"maximum product of subarray:"<<result;
    return 0;
}