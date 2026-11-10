class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int l = 0;
        int r = heights.size() - 1;
        
        while (l < r) {
            int hl = heights[l];
            int hr = heights[r];
            int water = (r - l) * std::min(hl, hr);
            max = std::max(water, max);

            if (hl < hr) l++;
            else r--;
        }

        return max;
    }
};
