class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        count = 0
        el = -1

        for i in nums:
            if count == 0:
                count += 1
                el = i

            elif el == i:
                count +=1
              
            else:
                count -= 1

        return el
