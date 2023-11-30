class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum=0,ans=0,diff;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum==k){
                ans++;
            }
            
            diff=sum-k;
            if(mp[diff]){
                ans=ans+mp[diff];
            }
            
            mp[sum]++;
        }
        return ans;
    }
};