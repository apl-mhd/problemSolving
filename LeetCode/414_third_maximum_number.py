class Solution:
    def thirdMax(self, nums: list[int]) -> int:
        nums.sort(reverse=True)
        count = 0
        for i in range(1, len(nums)):

            if nums[i-1] - nums[i] != 0:
                count += 1

                if count == 2:
                    break

        if count < 2:
            return nums[0]

        return nums[i]
