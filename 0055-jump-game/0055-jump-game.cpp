class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        int maxJump = 1;
        
        for(int i=0; i<n; i++) {
            maxJump = max(maxJump-1, nums[i]);
            if(i != n-1 && maxJump == 0) {
                return false;
            }
        }
        
        return true;
    }
};