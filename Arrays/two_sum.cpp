#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> hashmap;
    std::vector<int> result;

    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if(hashmap.find(complement) != hashmap.end()) {
            result.push_back(hashmap[complement]);
            result.push_back(i);
            return result;
        }

        hashmap[nums[i]] = i;
    }

    return result;
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);

    std::cout << "[" << result[0] << ", " << result[1] << "]" << std::endl;

    return 0;
}