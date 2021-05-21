#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printSubset(char *arr,int i,int n,string osf,vector<string>&res){
    //base case
    //vector<string>res;
    if(i==n){
        res.push_back(osf);
        return;
    }
    printSubset(arr,i+1,n,osf+(arr[i])+",",res);
    printSubset(arr,i+1,n,osf,res);

}
int main(){
    int n;cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     vector<string>res;
    printSubset(arr,0,n,"",res);
    for(auto ch:res){
        cout<<"["<<ch<<"]"<<endl;
    }
}
