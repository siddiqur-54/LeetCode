class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sizeNums = nums.size();
        int sumExists = 0, sumExpected;
        int ans;
        
        sumExpected = (sizeNums * (sizeNums + 1)) / 2;
        
        for(int i=0; i<sizeNums; i++) {
            sumExists += nums[i];
        }
        
        ans = sumExpected - sumExists;
        
        return ans;
    }
};