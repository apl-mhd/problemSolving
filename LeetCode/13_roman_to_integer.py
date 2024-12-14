class Solution:
    def romanToInt(self, s: str) -> int:
        roman_data = {'I': 1, 'V': 5, 'X': 10, 'L': 50,
                     'C': 100, 'D': 500, 'M': 1000, 'IV': 4, 'IX': 9, 'XL': 40, 'XC': 90, 'CD': 400, 'CM': 900}
        total_sum = 0
        i = 0
        seen = ['IV', 'IX', 'XL', 'XC', 'CD', 'CM']

        while i < len(s):
            sub_s = s[i: i+2]
            if sub_s in seen:
                total_sum += roman_data[sub_s]
                i += 2
            else:
                total_sum += roman_data[s[i]]
                print(s[i], i)
                i += 1

        return total_sum
