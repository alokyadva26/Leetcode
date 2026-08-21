class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();

        vector<int> result(n + 1);
        result[0] = 0;

        for (int i = 0; i < n; i++) {
            result[i + 1] = result[i] + gain[i];
        }

        return *max_element(result.begin(), result.end());
    }
};