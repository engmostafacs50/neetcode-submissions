class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        l = len(nums)
        ones = 0 
        res = 0
        for i in range(l)  :
            if(nums[i] == 1) :
                ones += 1 
            if(nums[i] == 0) : 
                ones = 0 
            res = max(res , ones)

        return res