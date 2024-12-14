class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        data = {}

        for i in nums:
            if i in data:
                data[i] += 1
            else:
                data[i] = 1

        max_count = float('-inf')
        val = 0
        for i in data:
            if max_count < data[i]:
                max_count = data[i]
                val = i

        return val
