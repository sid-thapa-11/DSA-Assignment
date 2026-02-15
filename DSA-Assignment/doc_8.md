# Program Documentation: Sorting Random Numbers with Multiple Algorithms

**Program Name:** Sorting Random Integers Using User-Selected Algorithm  
**Language:** C  
**Author:** Siddharth Thapa
**Course:** COMP202  

---

## (a) Explanation of Data Structures

The program uses:

1. **Array of Integers**  
   ```c
   int arr[N];
Stores N randomly generated integers in the range [1, 1000].

Dynamic size determined at runtime.

Counters for Analysis

int comparisons, swaps;
comparisons → Tracks the total number of element comparisons.

swaps → Tracks the total number of swaps performed (where applicable).

No other complex data structures are required since all sorting algorithms operate on the array in place.

(b) Description of Functions
1. bubbleSort(int arr[], int n)
Implements Bubble Sort.

Repeatedly compares adjacent elements and swaps them if they are in the wrong order.

Tracks comparisons and swaps.

2. selectionSort(int arr[], int n)
Implements Selection Sort.

Finds the minimum element in the unsorted portion and swaps it with the first unsorted element.

Tracks comparisons and swaps.

3. insertionSort(int arr[], int n)
Implements Insertion Sort.

Inserts each element at its correct position in the sorted portion.

Tracks comparisons and swaps.

4. mergeSort(int arr[], int l, int r)
Implements Merge Sort (Divide & Conquer).

Recursively divides the array into halves and merges them in sorted order.

Tracks comparisons and swaps during merging.

5. merge(int arr[], int l, int m, int r)
Helper function for mergeSort().

Merges two sorted subarrays [l..m] and [m+1..r].

6. printArray(int arr[], int n)
Prints the array elements in a single line.

(c) Overview of main() Function
Accepts N, the number of integers to generate.

Generates N random integers in the range [1, 1000].

Displays the generated array.

Asks the user to select a sorting algorithm:

1 → Bubble Sort

2 → Selection Sort

3 → Insertion Sort

4 → Merge Sort

Calls the corresponding sorting function.

Displays the sorted array.

Displays the total number of comparisons and swaps performed during sorting.

(d) Sample Output
Input:

Enter number of random integers (N): 5

Generated Array:
235 12 876 45 324

Choose a sorting algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
Enter choice (1-4): 3
Output:

Sorted Array:
12 45 235 324 876

Total comparisons: 7
Total swaps: 8
Conclusion
This program demonstrates:

Generation of random integers in a given range.

Implementation of multiple sorting algorithms.

Tracking of comparisons and swaps for performance analysis.

User interaction to choose algorithm at runtime.

Time Complexity:

Algorithm	Best Case	Worst Case
Bubble Sort	O(n)	O(n²)
Selection Sort	O(n²)	O(n²)
Insertion Sort	O(n)	O(n²)
Merge Sort	O(n log n)	O(n log n)