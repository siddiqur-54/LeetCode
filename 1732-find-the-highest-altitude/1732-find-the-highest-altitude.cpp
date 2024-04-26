class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int n = gain.size();
        int prefixSum = 0;
        int highestAltitude = 0;
        
        for(int i=0; i<n; i++) {
            prefixSum += gain[i];
            if(prefixSum > highestAltitude) {
                highestAltitude = prefixSum;
            }
        }
        
        return highestAltitude;
    }
};