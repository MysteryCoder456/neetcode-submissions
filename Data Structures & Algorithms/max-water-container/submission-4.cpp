class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int l = 0;
        int r = heights.size() - 1;
        int hl, hr;
        
        while (l < r) {
            hl = heights[l];
            hr = heights[r];
            max = std::max(max, (r - l) * std::min(hl, hr));

            if (hl < hr) l++;
            else r--;
        }

        return max;
    }
};
