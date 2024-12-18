class Solution:
    def smallerNumbersThanCurrent(self, nums: list[int]) -> list[int]:
        result = []
        for i in nums:
            count = 0
            for j in nums:
                if j < i:
                    count += 1

            result.append(count)

        return result
