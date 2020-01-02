//27 Remove Element 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         
       int index = 0; 
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index = index+1;
            
            }
        }
        return index;
        
    }//end of the function 
};
//LESSONS LEARNED - I COULD HAVE SOLVED THIS IN LESS THAN 5 MINUTES
// DONT JUMPT TO CODING 
