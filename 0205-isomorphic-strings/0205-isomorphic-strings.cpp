class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int s_size = s.size();
        int t_size = t.size();
        
        if(s_size != t_size) {
            return false;
        }
        
        map<char, char>mp, rmp;
        
        for(int i=0; i<s_size; i++) {
            if(mp.find(s[i]) != mp.end()) {
                if(mp[s[i]] != t[i]) {
                    return false;
                }
            }
            else {
                if(rmp.find(t[i]) != rmp.end()) {
                    return false;
                }
                mp[s[i]] = t[i];
                rmp[t[i]] = s[i];
            }
        }
        
        return true;
    }
};