#pragma once
#include <iostream>
using namespace std;

void sort_arr(int arr[], int n) {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void dupl_arr(int original[], int duplicated[]) {
    int original[] = { 1, 2, 3, 4, 5 };
    const int size = sizeof(original) / sizeof(original[0]);
    int duplicated[size];

    for (int i = 0; i < size; i++) {
        duplicated[i] = original[i];
        duplicated[i + size] = original[i];
    };

    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        cout << original[i] << " ";
    }
    cout << endl;

    cout << "Дублированный массив: ";
    for (int i = 0; i < size; i++) {
        cout << original[i] << " ";
    }
    cout << endl;;
}

