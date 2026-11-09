class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i1 = 0;
        int i2 = numbers.size() - 1;

        while (i1 < i2) {
            int sum = numbers[i1] + numbers[i2];
            if (sum < target)
                i1++;
            else if (sum > target)
                i2--;
            else
                break;
        }

        return {i1 + 1, i2 + 1}; // +1 because 1-indexed
    }
};
