class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercase = 0;
        int n = word.length();

        for(char ch : word){
            if(ch >= 'A' && ch <= 'Z'){
                uppercase++;
            }
        }

        if(uppercase == n) return true;
        else if (uppercase == 0) return true;
        else if(uppercase == 1 && word[0] >= 'A' && word[0]<='Z') return true;
        else return false;
    }
};