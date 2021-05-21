#include <iostream>
#include <vector>
#include<string>
using namespace std;


void SpaceString(string str,string osf){
    if(str.size()==0)
    {
        cout<<osf<<endl;
        return;
    }
    for (int i = 0; i < str.size(); i++)
    {
        char ch=str[i];
        string ros = str.substr(0,i)+str.substr(i+1);
        SpaceString(ros,osf+"0"+ch);

    }
}
int main(){
    SpaceString("abc","");
    return 0;
}