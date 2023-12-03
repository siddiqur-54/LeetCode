class Solution {
public:
    double myPow(double x, int n) { 
        
        long long int num=n;
        if((n==0)||(x==1)) {
            return 1;
        }
        if(x==-1) {
            if(num%2==0) {
                return x*(-1);
            }
            else {
                return x;
            }
        }
        
        double ans;
        if(num<0) {
            x=(1/x);
            num=num*(-1);
        }
        
        ans=1;
        while(num) {
            if(num&1) {
                ans=ans*x;
            }
            x=x*x;
            num=num>>1;
        }
        
        return ans;
    }
};