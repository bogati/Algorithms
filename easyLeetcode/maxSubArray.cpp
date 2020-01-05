class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //sliding window problem 
        int sum = INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>sum){
                sum = nums[i];
            }
            int temp_sum=nums[i];
            for(int j=i+1;j<nums.size(); j++){
                 temp_sum = temp_sum + nums[j];
                if(temp_sum>sum){
                    sum = temp_sum;
                }
            }
        }
        return sum;
        
    } //edn of the function 
    //without DP 300ms faster than 5.31% 
    //9.2MB less than 93.14% 
    //use dp 
    //store the max so far in the table 
    
    
    
    
};
