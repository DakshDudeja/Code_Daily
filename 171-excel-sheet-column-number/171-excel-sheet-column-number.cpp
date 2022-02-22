class Solution {
public:
    int titleToNumber(string c) {
        int power=c.size()-1;
        int ans=0;
        for(int i=0;i<c.size();i++){
            ans+=(c[i]-'A'+1)*pow(26,power);
            if(power==0) break;
                power--;
        }
        return ans;
    }
};