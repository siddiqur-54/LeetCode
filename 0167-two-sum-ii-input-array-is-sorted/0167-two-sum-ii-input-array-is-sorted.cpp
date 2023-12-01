class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n=numbers.size(),diff;
        vector<int>ans;
        map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            mp[numbers[i]]=i+1;
        }
        
        for(int i=0;i<n;i++) {
            diff=target-numbers[i];
            
            if((mp[diff])&&(mp[diff]!=i+1))
            {
                ans.push_back(i+1);
                ans.push_back(mp[diff]);
                break;
            }
        }
        
        return ans;
    }
};