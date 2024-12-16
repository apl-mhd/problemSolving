class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        seen = {}
        result = []
        for i in range(len(nums)):
            temp = target - nums[i]

            if temp in seen:
                result.append(seen[temp])
                result.append(i)
                break

            else:
                seen[nums[i]] = i

        return result
