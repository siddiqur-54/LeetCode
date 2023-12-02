class Solution {
public:
    string reverseVowels(string s) {
        
        int n=s.size();
        int i=0;
        int j=n-1;
        bool bi,bj;
        char temp;
        
        bi=false; bj=false;
        while(i<j) {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
                bi=true;
            }
            else {
                i++;
            }
            
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U') {
                bj=true;
            }
            else {
                j--;
            }
            if(bi==true&&bj==true) {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                bi=false; bj=false;
                i++; j--;
            }
        }
        
        return s;
        
    }
};