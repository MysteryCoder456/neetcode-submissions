class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        diffs = dict()
        for i, num in enumerate(nums):
            diff = target - num
            if num in diffs:
                return [diffs[num], i]
            diffs[diff] = i
        return [0, 0]
        