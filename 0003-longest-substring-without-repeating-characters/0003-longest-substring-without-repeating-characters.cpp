class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        int ans = 0;
        int localAns = 0;
        map<char, int>mp;
        
        for(int left=0, right=0; right<n; right++) {
            mp[s[right]]++;
            
            while(mp[s[right]] > 1) {
                mp[s[left]]--;
                left++;
            }
            
            localAns = right - left + 1;
            ans = max(ans, localAns);
        }
        
        return ans;
    }
};