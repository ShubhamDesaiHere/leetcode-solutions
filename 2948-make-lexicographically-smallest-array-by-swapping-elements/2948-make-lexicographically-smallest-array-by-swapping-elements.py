class Solution:
    def lexicographicallySmallestArray(self, A: List[int], limit: int) -> List[int]:
        ms = []  # store segments
        B = [(a, i) for i, a in enumerate(A)]
        B.sort()
        last = B[0][0]
        tmp = []
        ind = dict()
        cnt = 0
        # to create sorted segments
        for a, i in B:
            if a - last <= limit:
                tmp.append(a)
                ind[i] = cnt
            else:
                ms.append(tmp)
                tmp = [a]
                cnt += 1
                ind[i] = cnt
            last = a
        if tmp:
            ms.append(tmp)

        # pop the smallest value in each segment to our result
        ans = []
        for i, a in enumerate(A):
            ans.append(ms[ind[i]].pop(0))

        return ans