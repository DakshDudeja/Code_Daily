// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
   vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int>ans(n);
       stack<int>st;
       st.push(-1);
       for(int i=0;i<n;i++){
           while(st.top()!=-1 and price[st.top()]<=price[i]) st.pop();
           
           ans[i]=i-st.top();
           st.push(i);
       }
       
       return ans;
    }
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends