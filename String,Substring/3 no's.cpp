#include<bits/stdc++.h>
using namespace std;
class A{
    private:
    int x,y,z;
    public:
    void input(){
        cin >> x >> y >> z;
    }
    friend void find(A obj);
};
void find(A obj){
    cout << max({obj.x,obj.y,obj.z}) << endl;
}
int main()
{
    A obj;
    obj.input();
    find(obj);
    return 0;
}