class Solution {
public:
    bool checkDivisibility(int n) {
        int original  = n ;
        int sum = 0 , product = 1 ;

        while(n!=0){
            int num = n % 10;
            sum += num;
            product *= num;
            n = n/10;

        }
        int result = sum + product;

        if(original % result == 0) return true;
        else return false;
    
        
    }
};