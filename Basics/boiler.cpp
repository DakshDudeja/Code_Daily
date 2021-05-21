#include<bits/stdc++.h>
using namespace std;

bool stringTraversal(int i,string str){
    if( i >= str.length()){
        return false;
    }
        if (str[i]=='a')
        {
            if(str[i+1] == '/0' || str[i+1] == 'a' ){
                return true;
            }
            else if(str[i+1] == 'b' && str[i+2]=='b'){
                if(str[i+3]=='a' || str[i+3] == '/0')
                return true;
            }
        }
        else
        return false;
        
        stringTraversal(i+1,str);
    
}
int main(){
    string str;
    cin>>str;
    bool ans = stringTraversal(0,str);
    cout<<ans;
    return 0;
}