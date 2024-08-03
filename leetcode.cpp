//problem 1: subtract the sum and product of the digits of an integer
class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int prod = 1;
        int sum = 0;
        
        while(n!=0) {
            
            int digit = n%10;
            prod = prod * digit;
            sum = sum + digit;
            
            n = n/10;
        }
        
        int answer = prod - sum;
        return answer;
    }
};
//count number of 1 bits

class soultion{
public:
   int hammingweight(uint32_t n){
    int ans=0;
    while(n){
        if(n&1){
            ans++;
            }
    n=n>>1;
    }
    return ans;
   }
}

//PROBLEM 3: REVERSE AN INTEGER

