class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
        int preSum=nums[0];
        int sum;
        int ans=nums[0];
        
        for(int i=1;i<n;i++)
        {
            sum=max(nums[i],(nums[i]+preSum));
            ans=max(ans,sum);
            preSum=sum;
        }
        
        return ans;
    }
};