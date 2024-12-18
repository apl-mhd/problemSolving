class Solution:
    def findEvenNumbers(self, digits: list[int]) -> list[int]:

        seen = {}
        for i in digits:
            if i in seen:
                seen[i] += 1

            else:
                seen[i] = 1

        even_list = []
        for i in range(100, 1000, 2):
            temp = i
            flag = True
            temp_seen = seen.copy()
            while (i != 0):
                rem = i % 10
                if temp_seen.get(rem, 0) == 0:
                    flag = False
                    break
                else:
                    temp_seen[rem] -= 1

                i = i // 10

            if flag == True:
                even_list.append(temp)

        return even_list
