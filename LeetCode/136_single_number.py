
arr = [1, 2, 3, 2, 1]


class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        data_dict = {}
        for i in nums:
            if i in data_dict:
                data_dict[i] += 1
            else:
                data_dict[i] = 1

        for key, val in data_dict.items():
            if val == 1:
                return key


o = Solution()

a = o.singleNumber(arr)
print(a)
