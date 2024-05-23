class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n_s = s.size();
        int n_t = t.size();
        
        if(n_s != n_t) {
            return false;
        }
        
        map<char, int>mp;
        for(int i=0; i<n_s; i++) {
            mp[s[i]]++;
        }
        
        for(int i=0; i<n_t; i++) {
            if(mp[t[i]] == 0) {
                return false;
            }
            mp[t[i]]--;
        }
        
        return true;
    }
};