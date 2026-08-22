from collections import defaultdict, Counter
class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool : 
        s = set()
        for num in nums : 
            if(num in s): 
                return True 
            s.add(num)
        return False