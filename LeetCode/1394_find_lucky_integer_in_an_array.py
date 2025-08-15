class Solution:
    def findLucky(self, arr: list[int]) -> int:

        seen = {}
        for i in arr:
            if i in seen:
                seen[i] +=1
            else:
                seen[i] = 1

        max =float('-inf')
        for i in seen:
            if seen[i] == i:
                if max < i:
                    max = i
        
        if max < -1:
            return -1

        return max
    

nums = [2, 2, 3, 4]
nums = [1, 2, 2, 3, 3, 3]

nums = [2, 2, 2, 3, 3]

ob = Solution()
r = ob.findLucky(nums)
print(r)
