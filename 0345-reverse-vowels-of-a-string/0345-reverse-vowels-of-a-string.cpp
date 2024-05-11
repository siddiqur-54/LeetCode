class Solution {
public:
    bool isVowel(char c) {
        string vowel = "aeiouAEIOU";
        return vowel.find(c) != string::npos;
    }
    
    string reverseVowels(string s) {
        
        int n = s.size();
        int low = 0;
        int high = n-1;
        
        while(low < high) {
            while(low < high && !isVowel(s[low])) {
                low++;
            }
            while(low < high && !isVowel(s[high])) {
                high--;
            }
            
            swap(s[low], s[high]);
            low++;
            high--;
        }
        
        return s;
        
    }
};