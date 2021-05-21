#include<bits/stdc++.h>
using namespace std;
class A{
    private:
    int x,y;
    public:
    void input(){
        cin >> x >> y;
    }
    friend class B;
};
class B{
    public:
    void display(A obj){
        cout << obj.x << " " << obj.y << endl;
    }
    void display_sum(A obj){
        cout << obj.x + obj.y << endl;
    }
};
int main(){
    A obj;
    obj.input();
    B B;
    B.display(obj);
    B.display_sum(obj);
    return 0;
}