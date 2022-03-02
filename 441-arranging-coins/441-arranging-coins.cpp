class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1) return 1;
        long int i=1;
        while(n>=0){
               n=n-i;
                i++;
        }
        return i-2;        
    }
};