class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        int subArraySum = 0;
        int ans = INT_MAX;
        
        for(int left=0, right=0; right<n; right++) {
            subArraySum += nums[right];
            
            while(subArraySum >= target) {
                ans = min(ans, right-left+1);
                subArraySum -= nums[left];
                left++;
            }
        }
        
        if(ans == INT_MAX) {
            return 0;
        }
        else {
            return ans;
        }
    }
};