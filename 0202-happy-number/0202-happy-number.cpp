class Solution {
public:
    bool isHappy(int n) {
        if(n==1)return true;
        int a=n;
        while(a!=1 && a!=4 ){
            int b=a/10;
            int rem=a%10;
            long long int sum=0;
            while(b>0){
                sum+=rem*rem;
                rem=b%10;
                b/=10;
            }
            sum+=rem*rem;
            if(sum==1){
                return true;
            }
            a=sum;
        }
        return false;
    }
};