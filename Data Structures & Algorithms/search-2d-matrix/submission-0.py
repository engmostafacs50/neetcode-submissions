class Solution:
    def search(self, nums: List[int], target: int) -> bool:

        left = 0 
        right = len(nums)-1 

        while left <= right :
            middle = left + ((right - left) // 2)
            
            if nums[middle] == target :
                return True  
            elif nums[middle] < target :
                left = middle + 1
            else : 
                right = middle - 1

        return False
        
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for i in range(len(matrix)) :
            if self.search(matrix[i] , target) :
                return True 
        
        return False 

      