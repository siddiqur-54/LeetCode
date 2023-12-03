class Solution {
public:
    string rev(string s,int l,int h) {
        char temp;
        for(int i=l,j=h-1;i<(l+h)/2;i++,j--) {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
        return s;
    }
    
    string reverseStr(string s, int k) {
        int n=s.size();
        int kT=2*k;
        int r=n%kT;
        char temp;
        
        for(int i=0;i<n;i=i+kT) {
            if((i+kT)<=n) {
                s=rev(s,i,i+k);
            }
            else
            {
                if(r<k) {
                    s=rev(s,i,n);
                }
                else {
                    s=rev(s,i,i+k);
                }
            }
        }
        
        return s;
    }
};