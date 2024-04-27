class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int sizeS = s.size();
        int sizeT = t.size();
        int sequenceIndex = 0;
        
        for(int i=0; i<t.size(); i++) {
            if(t[i] == s[sequenceIndex]) {
                sequenceIndex++;
            }
            
            if(sequenceIndex == sizeS) {
                break;
            }
        }
        
        if(sequenceIndex == sizeS) {
                return true;
        }
        else {
            return false;
        }
    }
};