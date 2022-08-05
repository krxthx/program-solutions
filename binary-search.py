#Binary Search

def binary_search(nums,target):
  low=mid=0
  high=len(nums)-1
  while low<=high:
    mid=(low+high)//2
    if(nums[mid]<target):
      low=mid+1
    elif(nums[mid]>target):
      high=mid-1
    else:
      return mid
  return -1

# Test array
nums = [ 2, 3, 4, 10, 40 ]
target = 10
 
# Function call
result = binary_search(nums, target)
 
if result != -1:
    print("Element is present at index", str(result))
else:
    print("Element is not present in array")
