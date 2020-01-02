//Leetcode 1 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        /*vector<int> result;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                  
                    result.push_back(i);
                    result.push_back(j);
                    return result; 
                    
                }
            }
        }
        return result;*/
        //use the hashtable to solve this faster 
        vector<int> result;
        map<int,int> ht; 
        for(int i=0; i<nums.size();i++){
            if(ht.find((target-nums[i])) == ht.end()){
                ht[nums[i]] = i;
            }else{
                result.push_back(ht[(target-nums[i])]);
                result.push_back(i);
                break;
            }
        }//end of the for loop 
        return result;
        
    } //end of the function 
};
