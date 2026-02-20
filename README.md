# Quicksort in C

A from-scratch implementation of the Quicksort algorithm in C using the Lomuto partition scheme.

## Build and Run

```sh
gcc -Wall -Wextra -std=c99 -o quicksort quicksort.c
./quicksort
```

## Example Output

```
Unsorted: 10 7 8 9 1 5 3 4 2 6
Sorted:   1 2 3 4 5 6 7 8 9 10
```

## Complexity

| Case    | Time       | Space  |
|---------|------------|--------|
| Best    | O(n log n) | O(log n) |
| Average | O(n log n) | O(log n) |
| Worst   | O(n²)      | O(n)   |

The worst case occurs when the pivot is consistently the smallest or largest element (e.g. an already-sorted array).
