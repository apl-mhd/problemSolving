class Solution:
    def heightChecker(self, heights: list[int]) -> int:

        count = 0
        sorted_heights = sorted(heights)

        for i in range(len(heights)):

            if heights[i] - sorted_heights[i] != 0:
                count += 1

        return count