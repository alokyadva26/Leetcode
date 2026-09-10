class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();

        int index = 0;
        int i = 0;

        while(i < n){
            
            char curr = chars[i];
            int count = 0;

            while(i < n && chars[i]==curr){
                i++;
                count++;
            }

            chars[index]=curr;
            index++;

            if(count>1){
                string cnt = to_string(count);

                for(char &ch : cnt){
                    chars[index]=ch;
                    index++;
                }
            }


        }

        return index;
        
    }
};