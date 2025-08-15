class Solution:
    def search(self, nums: list[int], target: int) -> int:

        pivot = -1

        for i in range(len(nums)):
            if nums[i] == 0:
                pivot = i
                break

        if pivot != -1 and nums[pivot] == target:
            return pivot

        if pivot == -1:
            low = 0
            high = len(nums)-1

        elif nums[pivot-1] < target:
            low = 0
            high = pivot-1

        else:
            low = pivot+1
            high = len(nums) - 1

        print(low, high)

        def b_search(arr, low, high, target):
            mid = (low + high) // 2

            if arr[mid] == target:
                return mid

            if low > high:
                return -1

            if target < arr[mid]:
                return b_search(arr, low, mid-1, target)

            else:
                return b_search(arr, mid+1, high, target)

        return b_search(nums, low, high, target)


nums = [4, 5, 6, 7, 0, 1, 2]
nums = [3, 1]
target = 1

ob = Solution()
r = ob.search(nums, target)

print(r)
