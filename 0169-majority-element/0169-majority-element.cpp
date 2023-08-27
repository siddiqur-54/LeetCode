class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        map<int,int>:: iterator it;
        
        int mx=0; int ans=nums[0];
        for(it=mp.begin(); it!=mp.end();it++)
        {
            if(it->second>mx)
            {
                mx=it->second;
                ans=it->first;
            }
        }
        
        return ans;
    }
};