class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> numbers(nums.begin(), nums.end());
        int best = 0;
        int len;

        for (int n : nums) {
            // not a sequence start
            if (numbers.contains(n - 1)) continue;

            len = 1;
            while (numbers.contains(n + len)) len++;
            best = std::max(best, len);
        }

        return best;
    }
};
