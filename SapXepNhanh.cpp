#include <iostream>
using namespace std;
// Hàm hoán đổi hai giá trị
void hoan_doi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Hàm phân chia (partition) mảng theo pivot
int phan_chia(int arr[], int low, int high) {
    int pivot = arr[high]; // Chọn phần tử cuối làm pivot
    int i = low - 1;       // Chỉ số của phần tử nhỏ hơn

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            hoan_doi(arr[i], arr[j]); // Hoán đổi các phần tử nhỏ hơn pivot về phía trước
        }
    }
    hoan_doi(arr[i + 1], arr[high]); // Đưa pivot về đúng vị trí
    return i + 1;                    // Trả về chỉ số của pivot
}

// Hàm sắp xếp Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = phan_chia(arr, low, high); // Chỉ số của pivot sau khi phân chia
        // Gọi đệ quy để sắp xếp hai phần
        quickSort(arr, low, pi - 1); // Sắp xếp các phần tử trước pivot
        quickSort(arr, pi + 1, high); // Sắp xếp các phần tử sau pivot
    }
}

// Hàm in mảng
void in_mang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Mang truoc khi sap xep: ";
    in_mang(arr, n);
    quickSort(arr, 0, n - 1);
    cout << "Mang sau khi sap xep: ";
    in_mang(arr, n);
    return 0;
}
