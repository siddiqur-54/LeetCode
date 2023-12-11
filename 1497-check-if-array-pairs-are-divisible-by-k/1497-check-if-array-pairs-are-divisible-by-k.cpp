class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n=arr.size(), remainder, index, complement;
        vector<int>frequency(k, 0);
        bool ans;
        
        for(int i=0; i<n; i++) {
            remainder=((arr[i]%k)+k)%k;
            complement=k-remainder;
            index=complement%k;
            
            if(frequency[index]!=0) {
                frequency[index]--;
            }
            else {
                frequency[remainder]++;
            }
        }
        
        ans=true;
        for(int i=0; i<k; i++) {
            if(frequency[i]!=0) {
                ans=false;
                break;
            }
        }
        
        return ans;
    }
};