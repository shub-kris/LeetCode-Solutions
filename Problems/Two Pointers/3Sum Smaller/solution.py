class Solution:
    def countTriplets(self, arr, n, sumo):
        #code here
        arr.sort()
        count = 0
        for i in range(n-2):
            if arr[i] >= sumo:
                break
            st, end = i+1, n-1
            while st < end:
                triplet_sum = arr[i] + arr[st] + arr[end]
                if triplet_sum < sumo:
                    count = count + end - st
                    st = st + 1
                else:
                    end = end - 1
        return count