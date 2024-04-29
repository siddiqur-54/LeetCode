class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int sizeNums = nums.size();
        vector<int>prefixProduct(sizeNums, 1);
        vector<int>suffixProduct(sizeNums, 1);
        vector<int>ans(nums);
        
        for(int i=1; i<sizeNums; i++) {
            prefixProduct[i] = prefixProduct[i-1] * nums[i-1];
        }
        
        for(int i=sizeNums-2; i>=0; i--) {
            suffixProduct[i] = suffixProduct[i+1] * nums[i+1];
        }
        
        for(int i=0; i<sizeNums; i++) {
            ans[i] = prefixProduct[i] * suffixProduct[i];
        }
        
        return ans;
    }
};