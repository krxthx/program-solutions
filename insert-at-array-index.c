//     You are given an array arr(0-based index). The size of the array is given by sizeOfArray. You need to insert an element at given index and print the modified array.


    void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        if(index==(sizeOfArray-1))
            arr[index]=element;
        for(int i=sizeOfArray-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        return arr;

    }
