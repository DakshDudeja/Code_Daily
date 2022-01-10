class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>mp;
        int cnt=0;
        for(int i=0;i<words.size();i++){
            string s = words[i];
            reverse(s.begin(),s.end());
            if(mp[s]>0){
                cnt=cnt+4;
                mp[s]--;
            }
            else
                mp[words[i]]++;
        }
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            string s=itr->first;
            int count = itr->second;
            if(count>0 and s[0]==s[1]){
                cnt=cnt+2;
                break;
            }
        }
        return cnt;
    }
};