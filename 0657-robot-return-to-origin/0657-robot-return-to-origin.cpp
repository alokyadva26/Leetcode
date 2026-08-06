class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0 ;
        int y = 0;

        for ( char ch : moves ){
        if(ch=='U') x++;
        else if(ch=='D') x--;
        else if (ch=='R') y++;
        else y--;
        }
        if(x==0 && y == 0){
            return true;
        }else return false;
        
    }
};