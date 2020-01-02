// 9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        //orignially i was missing this test case 
        if(x<0){return false;}
        int save_x = x; 
        long ans = 0; 
        while(x!=0){
            ans = ans*10 + x%10; 
            x= x/10;
        }
        //cout <<ans;
        if( ans == save_x){
            return true;
        }
        return false; 
        
    }
};
