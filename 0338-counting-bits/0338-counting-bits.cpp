class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>ans = {0};
        int localAnsIndex, localAns;
        
        for(int i=1; i<=n; i++) {
            localAnsIndex = i/2;
            localAns = ans[localAnsIndex];
            if(i & 1) {
                localAns++;
            }
            
            ans.push_back(localAns);
        }
        
        return ans;
    }
};