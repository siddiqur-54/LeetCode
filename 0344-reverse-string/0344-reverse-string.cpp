class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        
        for(int i=0,j=n-1;i<(n/2);i++,j--) {
            s[i]=s[i]+s[j];
            s[j]=s[i]-s[j];
            s[i]=s[i]-s[j];
        }
    }
};