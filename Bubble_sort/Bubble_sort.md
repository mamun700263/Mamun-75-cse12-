
# Problem no: 2
## Problem name: Bubble Sort Algorithm

### Algorithm
Bubble Sort is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process repeats until no more swaps are needed, indicating the array is sorted.

1. Start from the beginning of the array.
2. For each element, compare it with the next element.
3. If the current element is greater than the next element, swap them.
4. Continue this for each element in the array.
5. Repeat the entire process for (n-1) passes (where n is the number of elements), as each pass bubbles the next largest element to its correct position.
6. Stop when a pass completes without any swaps.

### Code Snippet

Here’s the Bubble Sort code in C++:

```cpp
void bubbleSort(vector<int>& array) {
    int n = array.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
                swapped = true;
            }
        }

        // If no elements were swapped, the array is already sorted
        if (!swapped) break;
    }
}

```

### Explanation
- The **outer loop** runs \( n-1 \) times, where \( n \) is the size of the array.
- The **inner loop** moves through the unsorted section of the array, swapping adjacent elements if they are in the wrong order.
- The **`swapped` flag** optimizes the algorithm by stopping early if no swaps were made in a pass, indicating the array is already sorted.

### Complexity
- **Time Complexity**: \(O(n^2)\) in the worst and average case, but \(O(n)\) in the best case if the array is already sorted.
- **Space Complexity**: \(O(1)\), as it only requires a constant amount of extra space.

### Input
```cpp
size = 7
array = {64, 34, 25, 12, 22, 11, 90}
```

### Output
```cpp
Sorted array: 11 12 22 25 34 64 90
```

### [Code link](/Bubble_sort/Bubble_sort.cpp)

This code will sort the array in ascending order using the Bubble Sort algorithm.