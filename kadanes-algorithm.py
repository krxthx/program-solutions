def maxSubArraySum(self,arr,N):
        currSum, maxVal = float("-inf"), float("-inf")
        for num in arr:
            currSum = max(currSum+num,num)
            maxVal = max(currSum, maxVal)
        return maxVal
