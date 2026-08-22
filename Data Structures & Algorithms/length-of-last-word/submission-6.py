class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.strip() # delte spce from begininng and end
        l = len(s)
        for i in range(l - 1 , -1 , -1) : 
            if s[i] == ' ': 
                return l - i - 1 
        return l 