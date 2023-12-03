#include <iostream>

using namespace std;

int sumEven(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Masiv: ";
    for (int i = 0; i < size; i++) {
        printf("%2d ", arr[i]);
    }
    printf("\nSum of even: %2d\n", sumEven(arr, size));
    return 0;
}
