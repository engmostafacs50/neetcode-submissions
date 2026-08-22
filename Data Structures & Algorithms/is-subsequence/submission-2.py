class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if len(s) > len(t):
            return False
        index = 0 

        for chr in t : 
            if(index < len(s) and s[index] == chr) :
                index += 1 

        return index == len(s)