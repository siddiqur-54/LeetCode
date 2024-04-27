class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        int sizeNums1 = nums1.size();
        int sizeNums2 = nums2.size();
        
        map<int,int>mpNums1, mpNums2;
        
        vector<vector<int>>ans(2);
        
        for(int i=0; i<sizeNums1; i++) {
            mpNums1[nums1[i]] = 1;
        }
        
        for(int i=0; i<sizeNums2; i++) {
            mpNums2[nums2[i]] = 1;
        }
        
        for(int i=0; i<sizeNums1; i++) {
            if(mpNums2[nums1[i]] == 0) {
                ans[0].push_back(nums1[i]);
                mpNums2[nums1[i]] = 1;
            }
        }
        
        for(int i=0; i<sizeNums2; i++) {
            if(mpNums1[nums2[i]] == 0) {
                ans[1].push_back(nums2[i]);
                mpNums1[nums2[i]] = 1;
            }
        }
        
        return ans;
    }
};