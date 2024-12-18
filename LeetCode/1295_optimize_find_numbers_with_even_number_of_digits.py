class Solution:
    def findNumbers(self, nums: list[int]) -> int:

        count = 0
        total_even = 0
        for i in nums:
            if i < 10:
                count = 1
            elif i < 100:
                count = 2
            elif i < 1000:
                count = 3
            elif i < 10000:
                count = 4
            elif i < 100000:
                count = 5
            elif i < 1000000:
                count = 6

            if count % 2 == 0:
                total_even += 1
            count = 0

        return total_even
