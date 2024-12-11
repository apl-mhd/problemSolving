class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        data_dict = {}
        for i in nums:
            if i in data_dict:
                data_dict[i] += 1
                if data_dict[i] == 2:
                    return True
            else:
                data_dict[i] = 1

        for val in data_dict.values():
            if val >= 2:
                return True

        return False


arr = [1, 2, 3, 2, 1]

ardr = [1, 2, 3, 1]

aaarr = [1, 2, 3, 4]


o = Solution()

a = o.containsDuplicate(arr)
print(a)
