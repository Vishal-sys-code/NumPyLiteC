# **numpy.c: Implementation of Numpy using C**

## Table of Contents
* Introduction
* Features
* Installation
* Usage
    * Building the Project
    * Running Tests
* Contributing
* License

## Introduction
Welcome to **`numpy.c`**, a C implementation inspired by NumPy, designed to provide fundamental array operations and utilities. This project aims to offer a lightweight, efficient library for handling arrays and basic numerical computations in C programming language.

NumPy, a cornerstone of scientific computing in Python, provides powerful array manipulation capabilities. However, its extensive feature set and dependencies may not always be suitable for resource-constrained environments or specific performance-critical applications. numpy.c seeks to bridge this gap by offering essential functionalities reminiscent of NumPy, tailored for C developers needing efficient numerical operations.

This repository is ideal for developers seeking:

* **Performance**: Efficient array operations and utilities optimized for C.
* **Simplicity**: Lightweight implementation suitable for embedded systems or minimalistic environments.
* **Customization**: Core functionalities that can be integrated and extended according to specific project requirements.

Whether you're building applications that demand low-level control over memory and execution efficiency, or simply exploring foundational concepts of array manipulation in C, numpy.c aims to provide a robust solution.

## Features
* **Array Operations**: Creation, manipulation, and destruction of arrays.
* **Basic Numerical Computations**: Arithmetic and logical operations on arrays.
* **Memory Management Utilities**: Allocation, reallocation, and deallocation of memory.

Explore **`numpy.c`** to leverage the power of arrays in your C projects, and contribute to its evolution by providing feedback, reporting issues, or contributing enhancements.

## Installation
To use **`numpy.c`**, follow these steps:
* **Clone the Repository:**
```bash
git clone https://github.com/Vishal-sys-code/numpy.c.git
cd numpy.c
```
* **Build the Project:** 
```
make
```
Ensure you have a C compiler i.e. gcc compiler.

## Usage
* **Building the Project :**
After cloning the repository and navigating to the project directory, build the project using make:

```bash
make
```
This will compile all source files and generate executable files for the tests (`test_array`, `test_operations`, `test_utils`).

* **Running Tests :**
To verify the correctness of the implementation, run the test executables:
```bash
./test_array
./test_operations
./test_utils
```
These commands will execute the test cases defined for array operations, operations, and utility functions, respectively. Ensure all tests pass without errors or failures.

I am showing what I got the results here:
### Example Outputs for Verification
* **Building the Project :**
```bash
$ make
gcc -I./src -Wall -Wextra -o test_array src/array.c src/operations.c src/utils.c tests/test_array.c
gcc -I./src -Wall -Wextra -o test_operations src/array.c src/operations.c src/utils.c tests/test_operations.c
gcc -I./src -Wall -Wextra -o test_utils src/array.c src/operations.c src/utils.c tests/test_utils.c
```
* **Running Tests :**
```bash
$ ./test_array
Running tests for array operations...

Array created and printed:
Array (shape: [2, 3], size: 6):
1 2 3
4 5 6

Tests completed.
```

```bash
$ ./test_operations
Running tests for array operations...

Testing add_arrays:
Array (shape: [2, 3], size: 6):
1 2 3
4 5 6
Array (shape: [2, 3], size: 6):
2 4 6
8 10 12
Result of addition:
Array (shape: [2, 3], size: 6):
3 6 9
12 15 18

Testing subtract_arrays:
Array (shape: [2, 3], size: 6):
1 2 3
4 5 6
Array (shape: [2, 3], size: 6):
2 4 6
8 10 12
Result of subtraction:
Array (shape: [2, 3], size: 6):
-1 -2 -3
-4 -5 -6

Testing multiply_arrays:
Array (shape: [2, 3], size: 6):
1 2 3
4 5 6
Array (shape: [2, 3], size: 6):
2 4 6
8 10 12
Result of multiplication:
Array (shape: [2, 3], size: 6):
2 8 18
32 50 72

Testing divide_arrays:
Array (shape: [2, 3], size: 6):
2 4 6
8 10 12
Array (shape: [2, 3], size: 6):
1 2 3
4 5 6
Result of division:
Array (shape: [2, 3], size: 6):
2 2 2
2 2 2

Tests completed.
```

```bash
$ ./test_utils
Running tests for utility functions...

Testing check_allocation:
Memory allocation successful.

Testing reshape_array:
Original array:
Array (shape: [2, 3], size: 6):
1 2 3
4 5 6
Reshaped array:
Array (shape: [3, 2], size: 6):
1 2
3 4
5 6

Testing copy_array:
Original array:
Array (shape: [2, 3], size: 6):
1 2 3
4 5 6
Copied array:
Array (shape: [2, 3], size: 6):
1 2 3
4 5 6

Testing compare_arrays:
Array 1:
Array (shape: [2, 3], size: 6):
1 2 3
4 5 6
Array 2:
Array (shape: [2, 3], size: 6):
1 2 3
4 5 6
Array 3:
Array (shape: [2, 3], size: 6):
2 4 6
8 10 12
Array 1 is equal to Array 2.
Array 1 is not equal to Array 3.

Tests completed.
```


## Contributing
Contributions to **`numpy.c`** are welcome! If you find any bugs, have suggestions, or would like to add new features, please open an issue or submit a pull request.

## LICENSE
This project is licensed under the MIT License - see the [LICENSE](https://github.com/Vishal-sys-code/numpy.c/blob/main/LICENSE) file for details.
