class Solution {
   public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());  // O(nlogn)
        int k = nums.size() ; 
        return((nums[0]*nums[1]) - (nums[k - 2]*nums[k-1]));
    }
};