class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>smp(26,0);
        vector<int>pmp(26,0);
         vector<int>ans;               
        if(s.size()<p.size()) return ans;
        
        for(int i=0;i<p.size();i++){
            smp[s[i]-'a']++;
            pmp[p[i]-'a']++;
        }
        int left=0,right=p.size()-1;
        while(right<s.size()){
            
            if(smp==pmp)
                ans.push_back(left);                    
            right+=1;
           if(right!=s.size())
               smp[s[right]-'a']+=1;
            smp[s[left]-'a']-=1;
            left+=1;
        }
        return ans;
    }
};