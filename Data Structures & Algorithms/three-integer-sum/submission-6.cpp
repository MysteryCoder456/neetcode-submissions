#include <ranges>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::set<std::vector<int>> results = {};
        std::sort(nums.begin(), nums.end());

        int left, right, sum;

        for (int i = 1; i < nums.size() - 1; i++) {
            left = 0;
            right = nums.size() - 1;

            while (left < i && i < right) {
                sum = nums[left] + nums[i] + nums[right];

                if (sum < 0) left++;
                else if (sum > 0) right--;
                else {
                    results.insert({nums[left], nums[i], nums[right]});
                    left++;
                    right--;
                }
            }
        }

        return std::vector(results.begin(), results.end());
    }
};
