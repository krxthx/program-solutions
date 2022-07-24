def maxSubArray(self, nums: List[int]) -> int:
        currentMax, totalMax = nums[0],nums[0]
        for i in range(1, len(nums)):
            currentMax = max(nums[i], nums[i]+currentMax)
            totalMax = max(currentMax, totalMax)
        return totalMax
