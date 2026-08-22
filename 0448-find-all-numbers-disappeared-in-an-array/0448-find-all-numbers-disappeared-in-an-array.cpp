class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> visited(n+1, 0);

        vector<int> ans;

        for(int num : nums){
            visited[num]=1;

        }
        
        for(int i = 1 ; i<= n;i++){
            if(visited[i]!=1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};