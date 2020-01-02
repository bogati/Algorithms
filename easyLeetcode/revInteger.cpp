
//Leetcode 7 : Reverse an Integer 
class Solution {
public:
 
    int reverse(int x) {
        long ans = 0 ; 
        
        while(x!=0){
            ans = ans*10 + x%10;
            x=x/10;
            
        }
        if (ans>0)
            //checking the overflow condition before returning 
            return ans > INT_MAX ? 0 : ans;
        else return ans < INT_MIN ? 0 : ans;
        
    }
};
