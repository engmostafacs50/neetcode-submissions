class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.strip() # delte spce from begininng and end
        l = len(s) - 1
        for i in range(l , -1 , -1) : 
            if s[i] == ' ': 
                return l - i 
        return l + 1