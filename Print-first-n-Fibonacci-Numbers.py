#GFG

#Recursive Call
#Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.


class Solution:
    #Function to return list containing first n fibonacci numbers.
    def printFibb(self,n):
        n1, n2, list1 = 0, 1, [1]
        if n == 0 or n == 1:
            return list1
        else:
            for i in range(2, n+1):
                n3 = n1+n2
                n1, n2 = n2, n3
                list1.append(n2)
            return list1
                

if __name__ == '__main__': 
    t=int(input())
    for tcs in range(t):
        
        n=int(input())
        res = Solution().printFibb(n)
        for i in range (len (res)):
            print (res[i], end = " ") 
        print()
# } Driver Code Ends
