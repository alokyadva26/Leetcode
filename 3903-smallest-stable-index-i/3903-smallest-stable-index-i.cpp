class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> right(n);
        
        // Step 1: Precompute suffix minimums
        right[n-1] = nums[n-1];
        for (int i = n-2; i >= 0; --i) {
            right[i] = min(right[i+1], nums[i]);
        }
        
        // Step 2: Sweep left to right
        int left_max = nums[0];
        for (int i = 0; i < n; ++i) {
            left_max = max(left_max, nums[i]);
            if (left_max - right[i] <= k) {
                return i;
            }
        }
        return -1;
    }
};
