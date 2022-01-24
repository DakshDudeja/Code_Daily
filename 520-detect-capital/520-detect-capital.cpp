class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag=false;
        int cnt=0,n=word.size();
        for(int i=0;i<n;i++){
            if(word[i]<97)
                cnt++;
        }
        cout<<cnt;
        if(cnt==n) return true;
        if(word[0]>=97 and cnt==0) return true;
        if(word[0]<97 and cnt==1) return true;
        
        return false;
    }
};