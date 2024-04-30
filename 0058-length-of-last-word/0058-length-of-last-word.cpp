class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int sizeS = s.size();
        
        int i = sizeS-1;
        int firstIndex, lastIndex, ans;
        
        while(i >= 0) {
            while(i >= 0 && s[i] == ' ') {
                i--;
            }
            lastIndex = i;
            
            while(i >= 0 && s[i] != ' ') {
                i--;
            }
            firstIndex = i;
            
            break;        
        }
        
        ans = lastIndex - firstIndex;
        
        return ans;
    }
};