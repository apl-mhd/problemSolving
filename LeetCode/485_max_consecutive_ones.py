class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:

        max = 0
        count = 0

        for i in range(len(nums)):
            if nums[i] == 1:
                count += 1

            else:
                if count > max:
                    max = count
                count = 0

        if count > max:
            max = count

        return max