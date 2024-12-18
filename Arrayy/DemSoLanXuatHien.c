/*
Đề bài:
Nhập vào một mảng n số nguyên và một số nguyên x. Đếm xem số x xuất hiện bao nhiêu lần trong mảng.

Dữ liệu vào:
- Dòng 1: số nguyên dương n (1 <= n <= 1000)
- Dòng 2: n số nguyên của mảng.
- Dòng 3: số nguyên x.

Dữ liệu ra:
- Số lần xuất hiện của x trong mảng.

Ví dụ:
Input:
5
1 2 3 2 5
2

Output:
2
*/

#include <stdio.h>

int main() {
    int n, i, x, count = 0;
    int arr[1000];

    // Nhập số phần tử và mảng
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Nhập số x cần đếm
    printf("Nhap so x: ");
    scanf("%d", &x);

    // Đếm số lần xuất hiện của x
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    // In kết quả
    printf("So lan xuat hien cua %d: %d\n", x, count);
    return 0;
}
