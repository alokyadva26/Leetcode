class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int result=0;
        for ( int num : nums ){
            while(num != 0 ){
                num = num /10;
                result++;
            }

            if(result %2 == 0){
                count++;
            }
            result = 0;
        }

        return count ;
        
    }
};