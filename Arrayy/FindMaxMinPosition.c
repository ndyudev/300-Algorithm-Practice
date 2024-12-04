// Viết 2 chương trình con tìm Max, Min và vị trí của Max, Min trong mảng. 
//Áp dụng: Nhập vào 1 mảng có 1 phần tử là các số nguyên, tìm số nguyên lớn nhất, nhỏ nhất và vị trí của các số đó trong mảng

#include <stdio.h>

// Hàm tìm giá trị lớn nhất và vị trí của nó
void findIndexMax(int arr[], int n) {
    int max = arr[0];
    int indexMax = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            indexMax = i;
        }
    }
    printf("Max value is %d at index %d\n", max, indexMax);
}

// Hàm tìm giá trị nhỏ nhất và vị trí của nó
void findIndexMin(int arr[], int n) {
    int min = arr[0];
    int indexMin = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            indexMin = i;
        }
    }
    printf("Min value is %d at index %d\n", min, indexMin);
}

int main() {
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];

    // Nhập các phần tử cho mảng
    for (int i = 0; i < n; i++) {
        printf("Enter element at index [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Tìm và in giá trị lớn nhất, nhỏ nhất và vị trí của chúng
    findIndexMax(arr, n);
    findIndexMin(arr, n);

    return 0;
}

