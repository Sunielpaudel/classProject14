# Dynamic Array Implementation in C++

This project demonstrates a basic dynamic array implementation in C++ where users can enter integers into a dynamically resizing array. The project takes input from the user and calculates the sum of all the integers entered, excluding the termination signal (`-1`).

## Features
- Dynamically resizes an array as elements are added.
- Calculates and prints the sum of the integers in the array.
- Simple memory management using `new` and `delete`.

## How It Works
1. The user is prompted to enter integers one by one.
2. The array dynamically resizes itself if more space is needed (when the array reaches its current capacity).
3. The input ends when the user enters `-1`.
4. The program calculates and prints the sum of all valid integers entered.
5. After processing, the program deallocates the memory used by the array.

## Files in the Project
- `main.cpp`: Contains the `main()` function and calls the `dynamic()` function from the `dynamicUser` namespace.
- `ForAllDynamic.Hpp`: Header file which contains the declaration of the `dynamicUser` namespace and the `dynamic()` function.
- `README.md`: This file, describing the project.


## Memory Management
This project dynamically allocates memory for the array and ensures that all allocated memory is properly freed before the program exits. The `delete[]` operator is used to release the memory.

## Screenshots

<img width="908" alt="DynamicArray" src="https://github.com/user-attachments/assets/5d22332d-8068-4c0a-920d-775164f080b9">




