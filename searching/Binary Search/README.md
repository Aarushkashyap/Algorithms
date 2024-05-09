# Binary Search Algorithm in C++

This program implements the binary search algorithm in C++. Binary search is a fast search algorithm with a time complexity of O(log n). It works by repeatedly dividing in half the portion of the list that could contain the item, until you've narrowed down the possible locations to just one.

## Usage

1. **Compile the code**: Use a C++ compiler to compile the code. For example, you can use the g++ compiler:

   ```bash
   g++ filename.cpp -o output_executable
   ```

2. **Run the executable**: Execute the compiled program:

   ```bash
   ./output_executable
   ```

3. **Follow on-screen instructions**: Enter the size of the array and then input the elements of the array when prompted.

4. **Enter element to search**: After entering the array elements, the program will prompt you to enter the element you want to search for.

5. **View search result**: The program will output whether the element was found and its index if found, or indicate that the element was not found.

## Code Structure

- **binarySearch()**: This function implements the binary search algorithm. It takes the array, the left index, the right index, and the key (element to search) as input parameters. It performs binary search recursively or iteratively and outputs whether the element was found and its index if found, or indicates that the element was not found.

- **main()**: In the main function, the user is prompted to enter the size of the array and its elements. Then the user inputs the element to search for, and the binarySearch() function is called to search for the element in the array.

## Example

```
enter the size of array
5
enter the elements of array
1 2 3 4 5
enter the element to search
4
element found at index 3
```
