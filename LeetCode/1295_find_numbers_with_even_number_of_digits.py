class Solution:
    def findNumbers(self, nums: list[int]) -> int:

        count = 0
        total_even = 0
        for i in nums:
            while (i != 0):

                i = i // 10

                count += 1

            if count % 2 == 0:
                total_even += 1
            count = 0

        return total_even
