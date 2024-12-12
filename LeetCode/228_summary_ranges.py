class Solution:
    def summaryRanges(self, nums: list[int]) -> list[str]:

        if not nums:
            return nums

        index = 0
        result = []
        arr_size = len(nums)
        for key in range(arr_size-1):
            if nums[key+1] - nums[key] != 1:

                if key == index:
                    result.append(f"{nums[index]}")
                else:
                    result.append(f"{nums[index]}->{nums[key]}")
                index = key+1

        if index == arr_size-1:
            result.append(f"{nums[index]}")
        else:
            result.append(f"{nums[index]}->{nums[arr_size-1]}")

        return result
