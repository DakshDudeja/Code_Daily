#include <iostream>
using namespace std;

int main() {
    float n,k1,k2,k3,v;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>k1;
        cin>>k2;
        cin>>k3;
        cin>>v>>endl;
        if (k1*k2*k3*v > 958)
        {
            cout<<"No";
        }
        else
        cout<<"yes";
        

    }
    
	return 0;
}
