

nums = sorted([6, 2, 6, 5, 1, 2])

sum = 0
for i in range(0, len(nums), 2):
    sum += min(nums[i], nums[i+1])
