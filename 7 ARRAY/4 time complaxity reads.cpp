/*


Understanding why an algorithm with nested loops might still be O(n) instead of O(n²) can be nuanced. However, there's a key concept that helps determine this: **the total number of operations performed** across the loops. 

### Key Concept: Total Work Done

In algorithms with nested loops, to determine whether the time complexity is linear (O(n)) or quadratic (O(n²)), you need to analyze the total number of operations performed by the nested loops across the entire execution. 

### General Template: Sliding Window or Two-Pointer Technique

For algorithms that involve two nested loops but still have linear time complexity, common scenarios include:

1. **Sliding Window Technique**:
   - **Idea**: Maintain a window (or subarray) that can expand and contract as needed. Both pointers (`start` and `end`) move in one direction (usually forward) and ensure that every element is processed in constant time.
   - **How It Works**: Even though there are nested loops, each element is added and removed from the window at most once. Therefore, the total number of operations is linear.
   - **Example**: The sliding window technique in the problem you provided. Here, each pointer (`start` and `end`) only advances forward, and each element is processed a fixed number of times.

2. **Two-Pointer Technique**:
   - **Idea**: Use two pointers to track different parts of a data structure (like a sorted array). The pointers move in a coordinated way, such as one moving forward while the other catches up or adjusts.
   - **How It Works**: Each pointer only advances forward and does not revisit elements, leading to a linear pass through the data structure.
   - **Example**: Finding pairs in a sorted array that sum to a target value.

### Identifying Linear Time in Nested Loops

When analyzing algorithms with nested loops to determine if they are O(n) despite the nested structure:

1. **Pointer Movement**: Check if the nested loops are used to adjust pointers or windows rather than performing operations across all combinations. If each pointer only advances in a single direction (usually forward) and does not reprocess elements, this often indicates linear time complexity.

2. **Total Number of Operations**: Ensure that the inner loop does not lead to reprocessing the same elements repeatedly. If each element of the array or structure is processed a constant number of times, then the total work done is linear.

3. **Accumulative Work**: In some cases, inner loops or nested operations don’t result in a true quadratic complexity if the combined total work done remains proportional to the number of elements. For instance, operations may include adjusting pointers rather than recalculating or reprocessing each pair or subset.

### Example Analysis

Consider this simplified example of the two-pointer technique:

```cpp
void exampleFunction(vector<int>& arr) {
    int n = arr.size();
    int i = 0, j = 0;
    while (j < n) {
        // Process arr[j]
        j++;
        while (arr[j] - arr[i] > some_threshold) {
            i++;
        }
        // Process the window from i to j
    }
}
```

- **Outer `while` loop**: `j` pointer increments from `0` to `n`.
- **Inner `while` loop**: The `i` pointer only moves forward and doesn't revisit any elements. 

In this setup, even though the `i` and `j` pointers are nested, each element is handled in a linear fashion without reprocessing, leading to an overall O(n) time complexity.

### Conclusion

When evaluating time complexity for algorithms with nested loops, focus on how many times each element or operation is processed overall. If elements or operations are handled in a constant number of times relative to the size of the input, then the algorithm can still be linear in time complexity, despite having nested loop structures.


 */