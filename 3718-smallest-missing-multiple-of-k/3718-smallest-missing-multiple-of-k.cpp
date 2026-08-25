class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> seen;

        // Store all multiples of k
        for (int num : nums) {
            if (num % k == 0) {
                seen.insert(num);
            }
        }

        // Find the smallest missing multiple
        int multiple = k;
        while (true) {
            if (seen.find(multiple) == seen.end()) {
                return multiple;
            }
            multiple += k;
        }
    }
};
