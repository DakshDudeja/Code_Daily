// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    vector<string>res;
    vector<string>keypad={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz","*","0","#"};
    void solve(string &digits,string ans){
        if(digits.length()==0){
            res.push_back(ans);
            return;
        }
        char ch=digits[0];
        string code=keypad[ch-'0'-1];
        string ros = digits.substr(1);
        for(int i=0;i<code.length();i++){
            solve(ros,ans+code[i]);
        }
        return;
    }
    vector<string> possibleWords(int a[], int N){
        string s="";
        for(int i=0;i<N;i++){
            s+=to_string(a[i]);
        }
        solve(s,"");
        return res;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends