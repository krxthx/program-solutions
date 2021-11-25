// Kth smallest element 
// GFG
// Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int>maxHeap;
        for(int i = 0; i <= r; i++){
            maxHeap.push(arr[i]);
            if (maxHeap.size()>k){
                maxHeap.pop();
            }
        }
        return maxHeap.top();
    }
};
