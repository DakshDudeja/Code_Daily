class Solution {
public:
    bool isUgly(int x) 
    {
       int check=0;
        if(x<=0)return false;
        long n= abs(x);
        cout<<n<<endl;
        while(n%2==0)
        {
            n/=2;
            
        }
         while(n%3==0)
        {
            n/=3;
    
        }
         while(n%5==0)
        {
            n/=5;
            
        }
       cout<<n<<endl;
        if(n==1){return true;}
        return false;
        
    }
};