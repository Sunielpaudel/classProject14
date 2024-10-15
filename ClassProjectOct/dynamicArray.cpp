#include<iostream>

namespace dynamicUser {

    void dynamic() {
        int* arr = new int[1];
        int size = 0;
        int capacity = 1;
        int num;
        int sum = 0;

        std::cout << "Enter integers to store in the array. Enter -1 when you're done." << std::endl;

        while (true) {
            std::cout << "Enter an integer: ";
            std::cin >> num;

            if (num == -1) {
                break;
            }

            if (size == capacity) {

                int* temp = new int[capacity * 2];
                for (int i = 0; i < size; i++) {
                    temp[i] = arr[i];
                }
                delete[] arr;
                arr = temp;
                capacity *= 2;
            }

            arr[size] = num;
            size++;
        }
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }

        std::cout << "The sum of the array is: " << sum << std::endl;

        delete[] arr;
        arr = nullptr;
    }
}