# Bubble Sort Algorithm in C++

This is a basic implementation of the bubble sort algorithm in C++. Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## Usage

1. **Compile the code**: Use a C++ compiler to compile the code. For example, you can use g++ compiler:

   ```bash
   g++ filename.cpp -o output_executable
   ```

2. **Run the executable**: Execute the compiled program:

   ```bash
   ./output_executable
   ```

3. **Follow on-screen instructions**: Enter the size of the array and then input the elements of the array when prompted.

4. **View sorted array**: The program will output the sorted array after sorting it using the bubble sort algorithm.

## Code Structure

- **bubbleSort()**: This function implements the bubble sort algorithm. It takes the size of the array and the array itself as input and sorts the array in ascending order.

- **printArray()**: This function prints the elements of the array after sorting.

- **main()**: In the main function, the user is prompted to enter the size of the array and its elements. Then the bubbleSort() function is called to sort the array, followed by printing the sorted array using the printArray() function.

## Example

```
enter the size of array
5
enter the elements of array
3 5 1 4 2
Sorted Array:
1 2 3 4 5
```
