class Solution:
    def search(self, nums: list[int], target: int) -> bool:

        nums.sort()

        def b_search(arr, low, high, target):
            mid = (low + high) // 2

            if arr[mid] == target:
                return True

            if low > high:
                return False

            if target < arr[mid]:
                return b_search(arr, low, mid-1, target)

            else:
                return b_search(arr, mid+1, high, target)


        return b_search(nums, 0, len(nums)-1, target)



nums = [2, 5, 6, 0, 0, 1, 2]
target = 3

ob = Solution()
r = ob.search(nums, target)

print(r)
