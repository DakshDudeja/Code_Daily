class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       set<char>temp;
        int i=0,j=0;
        int ans=0;
        while(i<s.length()){
            if(temp.count(s[i])==0){
                temp.insert(s[i]);
                ans=max(ans,i-j+1);
                i++;
            }
            else{
                temp.erase(s[j]);
                j++;
            }
        }
        return ans;
    }
};