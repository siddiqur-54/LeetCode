class Solution {
    public int[] twoSum(int[] nums, int target) {

        int[] res=new int[2];
        int n=nums.length;
        Map<Integer,Integer>mp=new HashMap<>();
    
        for(int i=0;i<n;i++)
        {
            if(mp.containsKey(nums[i]))
            {
                res[0]=i;
                res[1]=mp.get(nums[i]);
            }
            else
            {
                mp.put(target-nums[i],i);
            }
        }
        return res;
    }
}