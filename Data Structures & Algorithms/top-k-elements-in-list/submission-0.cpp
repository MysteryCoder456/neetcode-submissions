struct Item {
    int key;
    int priority;

    bool operator <(const Item& other) const {
        return this->priority < other.priority;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;
        for (auto num : nums) {
            if (freq.find(num) != freq.end())
                freq[num]++;
            else
                freq[num] = 1;
        }

        std::priority_queue<Item> pq;
        for (const auto& [key, val] : freq) {
            Item item = { key, val };
            pq.push(item);
        }

        vector<int> result;
        for (int i = 0; i < k; i++) {
            Item item = pq.top();
            result.push_back(item.key);
            pq.pop();
        }
        return result;
    }
};
