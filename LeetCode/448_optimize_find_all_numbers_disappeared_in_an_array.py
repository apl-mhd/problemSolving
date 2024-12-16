class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:

        result = []
        for i in range(len(nums)):
            temp = abs(nums[i]) - 1

            if nums[temp] > 0:
                nums[temp] = nums[temp] * -1

        for i, val in enumerate(nums):

            if val > 0:
                result.append(i+1)

        return result