class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n=strs.size();
        unordered_map<string,vector<string>>res;
        vector<vector<string>>ans;
        string str;
        
        
        
        for(int i=0;i<n;i++)
        {
            str=strs[i];
            sort(str.begin(),str.end());
            
            res[str].push_back(strs[i]);
        }
        
        for(auto i:res)
        {
            ans.push_back(i.second);
        }
        
        return ans;
    }
};