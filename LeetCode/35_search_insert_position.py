arr = [1, 3,  5,  7, 9]
# target = 7
# low = 0
# high = len(arr)-1


# def bs(nums: list[int], low: int, high: int, target: int):

#     mid = (low + high) // 2

#     if low > high:
#         return low

#     if target == nums[mid]:
#         return mid

#     if target < nums[mid]:
#         high = mid-1
#         return bs(nums, low, high, target)
#     else:
#         low = mid + 1
#         return bs(nums, low, high, target)


class Solution:
    def searchInsert(self, nums: list[int], target: int) -> int:

        def a(nums, low, high, target):
            mid = (low + high) // 2

            if low > high:
                return low

            if target == nums[mid]:
                return mid

            if target < nums[mid]:
                high = mid-1
                return a(nums, low, high, target)
            else:
                low = mid + 1
                return a(nums, low, high, target)

        return a(nums, 0, len(nums)-1, target)


arr = [1, 3, 5, 6]
target = 7

o = Solution()

result = o.searchInsert(arr, target)
print(result)
