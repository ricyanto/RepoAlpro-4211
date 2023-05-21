#include <iostream>

using namespace std;

// Metode pengurutan Selection Sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        std::swap(arr[i], arr[maxIndex]);
    }
}

// Metode pengurutan Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Fungsi untuk menampilkan array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
        std::cout << std::endl;
}

int main() {
    int arr[] = {5, 4, 3, 2, 2, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Menggunakan metode Selection Sort
    std::cout << "Hasil Selection Sort: ";
    selectionSort(arr, size);
    printArray(arr, size);

    // Menggunakan metode Bubble Sort
    std::cout << "Hasil Bubble Sort: ";
    bubbleSort(arr, size);
    printArray(arr, size);

    return 0;
}

