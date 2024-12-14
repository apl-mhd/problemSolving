class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        arr_size = len(nums)
        total_sum = 0
        for i in nums:
            total_sum += i

        return (arr_size * (arr_size + 1) // 2) - total_sum

