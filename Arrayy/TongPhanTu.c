//Bài 1: Tìm tổng các phần tử trong mảng
//Đề bài:
//Viết chương trình nhập vào một mảng số nguyên có n phần tử. Tính tổng của tất cả các phần tử trong mảng và in ra kết quả.
#include <stdio.h>

int main() {
    // Đề bài: Tính tổng các phần tử trong mảng
    int n, sum = 0;

    // Nhập số lượng phần tử trong mảng
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Tính tổng các phần tử
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // In ra kết quả
    printf("Tong cac phan tu trong mang: %d\n", sum);
    return 0;
}
