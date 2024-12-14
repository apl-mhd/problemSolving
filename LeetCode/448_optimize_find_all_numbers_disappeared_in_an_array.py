class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:

        result = []
        arr_size = len(nums) + 1
        seen = [0] * (arr_size)

        for i in nums:
            seen[i] = -1

        for i in range(1, arr_size):
            if seen[i] != -1:
                result.append(i)

        return result