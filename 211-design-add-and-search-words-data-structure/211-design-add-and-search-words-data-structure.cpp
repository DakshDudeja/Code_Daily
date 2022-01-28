class WordDictionary {
public:
    unordered_map<int,vector<string>>mp;
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        int n= word.size();
        mp[n].push_back(word);
    }
    
    bool search(string word) {
        int n=word.size();
        
        for(int i=0;i<mp[n].size();i++){
            string temp = mp[n][i];
            bool flag =true;
            
           for(int j=0;j<n;j++){
               if(word[j]=='.') continue;
               
               if(temp[j]!=word[j]){
                  flag=false;   
                  break;
               }
           }
            if(flag)return true;
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */