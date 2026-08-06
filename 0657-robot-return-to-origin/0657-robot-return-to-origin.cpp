class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char , int> count;

        for(char ch : moves){
            count[ch]++;
        }

        if(count['U']==count['D']&&count['R']==count['L']) return true;
        else return false;
        
    }
};