/*
1137. N-th Tribonacci Number


The Tribonacci sequence Tn is defined as follows: 

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.

 

Example 1:

Input: n = 4
Output: 4
Explanation:
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4
Example 2:

Input: n = 25
Output: 1389537
 

Constraints:

0 <= n <= 37
The answer is guaranteed to fit within a 32-bit integer, ie. answer <= 2^31 - 1

//SOLUTION 
class Solution {
public:
    /*int tribonacci(int n) {
        map<int,int> ht; 
        ht[0] = 0;
        ht[1] =1;
        ht[2] =1; 
        
        if(n==0) return 0;
        if(3>n>0) return 1;
        

        
        
        int val = tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        if(ht.find(val)==ht.end()){
        //value not found 
                    
            ht[n] = val;
        }else{
            //value found 
            return val ;
        }
        
        return val;
        
    }*/
    
    //bottom up approach 
    
    int tribonacci(int n){
        int arr[n+3];
        arr[0]=0;
        arr[1]=1;
        arr[2]=1;
        
        for(int i=3; i<=n;i++){
            arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
        }
        return arr[n];
          
    } //end of the function 
    
};


