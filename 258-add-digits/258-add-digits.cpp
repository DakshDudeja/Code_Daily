class Solution {
public:
    int addDigits(int num) {
        int cnt,sum=0;
        while(num){
            int tmp = num%10;
            sum=sum+tmp;
            if(num/10>=1 and num/10<=9){
                sum=sum+num/10;
                num=sum;
                sum=0;
                continue;
            }
            num=num/10;
        }
        return sum;
    }
};