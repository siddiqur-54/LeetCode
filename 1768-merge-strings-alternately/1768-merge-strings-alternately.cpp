class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int word1Length = word1.size();
        int word2Length = word2.size();
        int minLength = min(word1Length, word2Length);
        
        string ans = "";
        
        for(int i=0; i<minLength; i++) {
            ans += word1[i];
            ans += word2[i];
        }
        
        for(int i=minLength; i<word1Length; i++) {
            ans += word1[i];
        }
        
        for(int i=minLength; i<word2Length; i++) {
            ans += word2[i];
        }
        
        return ans;
    }
};