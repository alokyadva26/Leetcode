class Solution {
public:
    string removeStars(string s) {
        int i = 0;

        for(char ch : s){
            if(ch == '*' ) i--;
            else {
                s[i]=ch;
                i++;
            }
        }

        s.resize(i);
        return s;
        
    }
};