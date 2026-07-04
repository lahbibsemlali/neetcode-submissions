class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        mp = dict()
        for e in nums:
            if e in mp:
                return True
            mp[e] = mp.get(e, 0) + 1
        return False