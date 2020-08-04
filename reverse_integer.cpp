class Solution {
public:
    int reverse(int x) {
      //  int rem,q;
         long int rev=0;
        while(x!=0){
           int pop= x%10;
            x=x/10;
            rev = rev*10 +pop;  
        }
        if(rev<INT_MIN|| rev>INT_MAX)
            return 0;
        
        return rev;
    }
};