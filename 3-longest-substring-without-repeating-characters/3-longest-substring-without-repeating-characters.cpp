class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>mp;
        int i=0,j=0;
        int ans=0;
        while(i<s.length()){
            if(mp.count(s[i])!=0){ 
                j=max(mp[s[i]]+1,j);
            }
                mp[s[i]]=i;
                ans=max(ans,i-j+1);
                i++;
            
        }
        return ans;
    }
};