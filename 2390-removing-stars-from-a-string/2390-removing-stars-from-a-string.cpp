class Solution {
public:
    string removeStars(string s) {
        
        int sizeS = s.size();
        string ans = "";
        
        for(int i=0; i<sizeS; i++) {
            if(s[i] == '*') {
                if(ans != "") {
                    ans.pop_back();
                }
            }
            else {
                ans.push_back(s[i]);
            }
        }
        
        return ans;
    }
};