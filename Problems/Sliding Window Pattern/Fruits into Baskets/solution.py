from typing import List
class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        n = len(fruits)
        max_fruits, k = 0, 0
        uniq_fruits_count = {}
        for i in range(n):
            uniq_fruits_count[fruits[i]] = uniq_fruits_count.get(fruits[i], 0) + 1
            while len(uniq_fruits_count) > 2:
                uniq_fruits_count[fruits[k]] = uniq_fruits_count[fruits[k]] - 1
                if uniq_fruits_count[fruits[k]] == 0:
                    uniq_fruits_count.pop(fruits[k])
                k = k + 1
            cur_fruits_count = i - k + 1
            if max_fruits < cur_fruits_count:
                max_fruits = cur_fruits_count
        return max_fruits