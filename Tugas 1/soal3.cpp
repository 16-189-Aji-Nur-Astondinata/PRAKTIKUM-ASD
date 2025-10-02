#include <iostream>
using namespace std;

// Fungsi untuk membalikkan array menggunakan pointer
void balikArray(int *arr, int n) {
    int *awal = arr;          // pointer ke elemen pertama
    int *akhir = arr + n - 1; // pointer ke elemen terakhir

    while (awal < akhir) {
        int temp = *awal;
        *awal = *akhir;
        *akhir = temp;

        awal++;
        akhir--;
    }
}

int main() {
    int n;

    cout << "Masukkan ukuran array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);  // input dengan pointer
    }

    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    balikArray(arr, n);

    cout << "Array sesudah dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    return 0;
}
