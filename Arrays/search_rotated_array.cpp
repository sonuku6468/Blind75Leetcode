#include<bits/stdc++.h>
using namespace std;
 int search(vector<int>& nums, int target) {
        int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        if (nums[left] <= nums[mid]) {
            // Left half is sorted
            if (target >= nums[left] && target < nums[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else {
            // Right half is sorted
            if (target > nums[mid] && target <= nums[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return -1;
    }
int main()
{
   
    vector<int> v={4,5,6,7,0,1,2};
    cout << "Index of 0 in the array : "<<search(v,0);
    return 0;
}