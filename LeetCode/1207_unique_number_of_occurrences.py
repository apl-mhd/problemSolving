class Solution:
    def uniqueOccurrences(self, arr: list[int]) -> bool:

        seen = {}
        for i in arr:

            if i in seen:
                seen[i] += 1
            else:
                seen[i] = 1
        data = []
        for i in seen:
            data.append(seen[i])
        data.sort()

        for i in range(len(data)-1):
            if data[i] - data[i+1] == 0:
                return False

        return True
