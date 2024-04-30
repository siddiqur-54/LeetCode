class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int ransomNoteSize = ransomNote.size();
        int magazineSize = magazine.size();
        
        
        map<char, int>mpRansom, mpMagazine;
        
        for(int i=0; i<ransomNoteSize; i++) {
            mpRansom[ransomNote[i]]++;
        }
        
        for(int i=0; i<magazineSize; i++) {
            mpMagazine[magazine[i]]++;
        }
        
        for(int i=0; i<ransomNoteSize; i++) {
            if(mpMagazine.find(ransomNote[i]) != mpMagazine.end()) {
                if(mpRansom[ransomNote[i]] > mpMagazine[ransomNote[i]]) {
                    return false;
                }
                
            }
            else {
                return false;
            }
        }
        
        return true;
    }
};