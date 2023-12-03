class Solution {
public:
    bool isPerfectSquare(int num) {
        
        bool ans=false;
        unsigned long long int n=num;
        unsigned long long int low=1,mid;
        unsigned long long int x;
        unsigned long long int high=n;
        while(low<=high) {
            mid=(low+high)/2;
            x=mid*mid;
            if(x==n) {
                ans=true;
                break;
            }
            else if(x>n) {
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        
        return ans;
    }
};