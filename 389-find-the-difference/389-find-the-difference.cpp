class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<int,int>mp;
        for(auto it:s)
            mp[it]++;
        for(auto it:t){
            if(mp.count(it) and mp[it]>0)
                mp[it]--;
            else
                return it;
        }
        int a;
        return a ;
    }
};