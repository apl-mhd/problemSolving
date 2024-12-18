class Solution:
    def smallerNumbersThanCurrent(self, nums: list[int]) -> list[int]:
        sort_array = sorted(nums)
        result = []
        seen = {}

        for key, val in enumerate(sort_array):
            if val not in seen:
                seen[val] = key

        for key in nums:
            result.append(seen[key])

        return result
