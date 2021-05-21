#include<bits/stdc++.h>
using namespace std;
class B;
class A{
    private:
        int num;
    public:
        void getdata(){
            cin >> num;
        }
        friend void maxi(A, B);
};
class B{
    private:
        int num;
    public:
        void getdata(){
            cin >> num;
        }
        friend void maxi(A, B);
};
void maxi(A obj1, B obj2){
    cout << max(obj1.num,obj2.num) << endl;
}
int main(){
    A obj1;
    B obj2;
    obj1.getdata();
    obj2.getdata();
    maxi(obj1,obj2);
    return 0;
}