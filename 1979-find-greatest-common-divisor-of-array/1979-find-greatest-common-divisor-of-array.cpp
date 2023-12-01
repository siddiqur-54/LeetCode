class Solution {
public:
    int gcdEucleadean(int a,int b)
    {
        if(a==0)
        {
            return b;
        }
        return gcdEucleadean(b%a,a);
    }
    
    int findGCD(vector<int>& nums) {
        
        int n=nums.size(),ans;
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        
        ans=gcdEucleadean(mn,mx);
        
        return ans;
    }
};