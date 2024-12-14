class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:

        seen = {}
        result = []

        for i in nums:
            seen[i] = 1

        for i in range(1, len(nums)+1):
            if not seen.get(i):
                result.append(i)

        return result
