# Linear Search Algorithm in C++

This program implements the linear search algorithm in C++. Linear search is a simple searching algorithm that sequentially checks each element of the array until the desired element is found or the end of the array is reached.

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

4. **Enter element to search**: After entering the array elements, the program will prompt you to enter the element you want to search for.

5. **View search result**: The program will output whether the element was found and its index if found, or indicate that the element was not found.

## Code Structure

- **linearSearch()**: This function implements the linear search algorithm. It takes the size of the array, the array itself, and the key (element to search) as input parameters. It sequentially searches through the array to find the key element and outputs its index if found, or a message indicating that the element was not found.

- **main()**: In the main function, the user is prompted to enter the size of the array and its elements. Then the user inputs the element to search for, and the linearSearch() function is called to search for the element in the array.

## Example

```
enter the size of array
5
enter the elements of array
3 5 1 4 2
enter the element to search
4
element found at index 3
```
