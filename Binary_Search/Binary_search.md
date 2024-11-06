# Problem no:1
## problem name: Binary search algorithm

## Algorithm 
1. Set the starting point (low) at the beginning of the array and the ending point (high) at the end.
2. While low is less than or equal to high, calculate the middle index:

    - mid = low + (high - low) / 2.

3. Compare the middle element with the target:

    - If the middle element is greater than the target, move high to mid - 1 (focus on the left half).
    - If the middle element is less than the target, move low to mid + 1 (focus on the right half).
    - If the middle element is equal to the target, return the index (found).

4. If the loop ends without finding the target, return -1 to indicate it was not found.


## Code Snippet
```cpp
int binarySearch(const vector<int>& array, int target) {
    int low = 0;
    int high = array.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (array[mid] == target) {
            return mid;  // Found the target
        }
        else if (array[mid] > target) {
            high = mid - 1;  // Focus on the left half
        }
        else {
            low = mid + 1;  // Focus on the right half
        }
    }
    
    return -1;  // Target not found
}
```
a full code is given in the  file where you can input an array and a target value . If target is present it will let you know by giving the index of the target else it will return -1;

### [Code link](Binary_search.cpp)

## input
```cpp
size = 5
array =[1,2,3,4,5]
target = 4

```
## output 
```cpp
Found the target at index 3
```
## input
```cpp
size = 6
array =[1,2,3,4,5,6]
target = 8

```
## output 
```cpp
-1
```