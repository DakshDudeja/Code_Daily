class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>smp(26,0);
        vector<int>pmp(26,0);
        vector<int>res;
        if(s.size()<p.size()) return res;
        for(int i=0;i<p.size();i++){
            pmp[p[i]-'a']++;
            smp[s[i]-'a']++;
        }
        int left=0,right=p.size()-1,len=s.size();
        while(right < len){
            
            if(smp==pmp) 
                res.push_back(left);
            right+=1;
            if(right!=len){
                smp[s[right]-'a']+=1;
                smp[s[left]-'a']-=1;
            
            }
            
            left+=1;
        }
    return res;
        
    }
};