class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size(),diff;
        map<int,int>mp;
        vector<int>ans;
        
        for(int i=0;i<n;i++) {
            mp[nums[i]]=i+1;
        }
        
        for(int i=0;i<n;i++) {
            diff=target-nums[i];
            if((mp[diff])&&(mp[diff]!=i+1)) {
                ans.push_back(i);
                ans.push_back(mp[diff]-1);
                break;
            }
        }
        
        
        return ans;
    }
};