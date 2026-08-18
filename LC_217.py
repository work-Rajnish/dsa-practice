class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        frq={}
        for n in nums:
            if n in frq:
                return True
            frq[n]=1
        return False