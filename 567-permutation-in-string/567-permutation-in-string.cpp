class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>mp1(26,0);
        vector<int>mp2(26,0);
        if(s2.size()<s1.size())return false;
        for(int i=0;i<s1.size();i++){
            mp1[s1[i]-'a']++;
            mp2[s2[i]-'a']++;
        }
        int left=0,right=s1.size()-1;
        while(right<s2.size()){
            
            if(mp1==mp2) return true;
            
            right++;
            if(right<s2.size())
                mp2[s2[right]-'a']++;
            
            mp2[s2[left]-'a']--;
            left++;   
        }
        return false;
    }
};