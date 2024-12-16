class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:

        restult = []

        i = 0
        j = len(numbers) - 1

        while (i < j):

            temp = numbers[i] + numbers[j]

            if temp == target:
                restult.append(i+1)
                restult.append(j+1)
                break

            if temp < target:
                i += 1
            else:
                j -= 1

        return restult