#include<iostream>
using namespace std;

string keypad[]={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};

void key(string s,string ans){
    if(s.length()==0){
        cout<<ans<<" ";
        return;
    }
    char ch=s[0];
    string code=keypad[ch-'0'];
    string ros=s.substr(1);
 
    
    for(int i=0;i<code.length();i++){
        key(ros,ans+code[i]);
    }
}
int main(){
    key("12","");

    return 0;
}
