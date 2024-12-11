class Solution:
    def containsNearbyDuplicate(self, nums: list[int], k: int) -> bool:
        data_dict = {}
        for index, val in enumerate(nums):
            if val in data_dict:
                if abs(data_dict[val] - index) <= k:
                    data_dict[val] = index
                    return True
                else:
                    data_dict[val] = index
            else:
                data_dict[val] = index
        return False


arr = [1, 2, 3, 1]
k = 3

arr = [1, 0, 1, 1]
k = 1

arr = [1, 2, 3, 1, 2, 3]
k = 2

o = Solution()
a = o.containsNearbyDuplicate(arr, k)

print(a)
