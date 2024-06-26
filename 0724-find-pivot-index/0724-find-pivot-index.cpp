class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        int prefixSum = 0;
        int suffixSum = 0;
        int sum = 0;
        
        for(int i=0; i<n; i++) {
            sum += nums[i];
        }
        
        for(int i=0; i<n; i++) {
            suffixSum = sum - prefixSum - nums[i];
            if(prefixSum == suffixSum) {
                return i;
            }
            prefixSum += nums[i];
        }
        
        return -1;
    }
};