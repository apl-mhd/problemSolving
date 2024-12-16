class Solution:
    def search(self, nums: list[int], target: int) -> int:

        def b_search(nums, low, high, target):

            mid = (low+high) // 2

            if nums[mid] == target:
                return mid

            if low > high:
                return -1

            if target < nums[mid]:
                return b_search(nums, low, mid-1, target)

            else:
                return b_search(nums, mid+1, high, target)

        return b_search(nums, 0, len(nums)-1, target)
