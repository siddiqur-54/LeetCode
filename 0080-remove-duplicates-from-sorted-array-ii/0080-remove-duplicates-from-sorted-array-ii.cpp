class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
      
      int sizeNums = nums.size();
      int k = 0;
      
      for(int i=0; i<sizeNums; i++) {
          if(k < 2 || nums[i] > nums[k - 2]) {
              nums[k] = nums[i];
              k++;
          }
      }
      
      return k;
  }
};