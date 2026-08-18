class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        res={}
        for i,n in enumerate(nums):
            ans=target-n
            if ans in res:
               return [res[ans],i]
            res[n]=i
            

        