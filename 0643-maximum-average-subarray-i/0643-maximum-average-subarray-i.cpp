class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int sizeNums = nums.size();
        double slidingWindowSum = 0, maxSum;
        double ans;
        
        for(int i=0; i<k; i++) {
            slidingWindowSum += nums[i];
        }
        maxSum = slidingWindowSum;
        
        for(int i=k, j=0; i<sizeNums; i++, j++) {
            slidingWindowSum = slidingWindowSum + nums[i] - nums[j];
            if(slidingWindowSum > maxSum) {
                maxSum = slidingWindowSum;
            }
        }
        
        ans = maxSum / k;
        return ans;
    }
};