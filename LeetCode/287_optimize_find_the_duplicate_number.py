class Solution:
    def findDuplicate(self, nums: list[int]) -> int:
        result = 0
        for i in range(len(nums)):
            temp = abs(nums[i])-1
            if nums[temp] < 0:
                result = temp
                break
            nums[temp] *= -1

        return result+1
