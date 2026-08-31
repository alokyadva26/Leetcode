class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maxVal = nums[0], minVal = nums[0];
        int maxIndx = 0, minIndx = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] > maxVal){
                maxVal = nums[i];
                maxIndx = i;
            }
            if(nums[i] < minVal){
                minVal = nums[i];
                minIndx = i;
            }
        }

        // 4 possible ways
        int left = max(maxIndx, minIndx) + 1;
        int right = n - min(maxIndx, minIndx);
        int both1 = minIndx + 1 + (n - maxIndx);
        int both2 = maxIndx + 1 + (n - minIndx);

        return min({left, right, both1, both2});
    }
};
