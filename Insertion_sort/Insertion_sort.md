
# Problem no: 4
## Problem name: Insertion Sort Algorithm

## Algorithm
1. Start with the second element (index 1) as the key.
2. Compare the key with elements in the sorted portion (left side) of the array.
3. Shift all elements greater than the key one position to the right.
4. Insert the key in its correct position within the sorted portion.
5. Repeat steps 2-4 for each element until the entire array is sorted.

## Code Snippet
```cpp

void insertion(int *arr,int size){
for (int i = 1; i < size; i++) {
    int key = array[i];
    int j = i - 1;

    // Shift elements of the sorted portion that are greater than the key
    while (j >= 0 && array[j] > key) {
        array[j + 1] = array[j];
        j = j - 1;
    }
    array[j + 1] = key;
}
return;
}


```

A full code is provided in the file where you can input an array, and it will return the sorted array in ascending order.

### [Code link](/Insertion_sort/Insertion_sort.cpp)

## Input
```cpp
array = {5, 2, 9, 1, 5, 6}
```

## Output
```cpp
1 2 5 5 6 9
```
