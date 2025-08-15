class Solution:
    def maxProduct(self, nums: list[int]) -> int:

        nums.sort(reverse=True)
        return (nums[0] - 1) * (nums[1]-1)


nums = [12, 3, 4]
nums = [3, 4, 5, 2]
nums = [1, 5, 4, 5]

nums = [3, 7]

ob = Solution()
r = ob.maxProduct(nums)

print(r)
