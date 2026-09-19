from collections import defaultdict
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = 0 
        right = 0 
        frequency_letters = defaultdict(int)
        max_len = 0
        while right < len(s):
            frequency_letters[s[right]]+=1 
            while frequency_letters[s[right]] > 1 :
                frequency_letters[s[left]] -= 1
                left += 1 
            max_len = max(max_len , right - left + 1)
            right += 1
        return max_len        