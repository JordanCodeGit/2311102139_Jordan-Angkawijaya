#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100; // Maksimum ukuran array
    int arr[MAX_SIZE];
    int size;
    int choice;

    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan ukuran array: ";
    cin >> size;

    // Memastikan ukuran yang dimasukkan tidak melebihi batas maksimum
    if (size > MAX_SIZE) {
        cout << "Ukuran array melebihi batas maksimum." << endl;
        return 1;
    }

    // Meminta pengguna untuk memasukkan elemen-elemen array
    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Array[" << i << "]: ";
        cin >> arr[i];
    }

    // Menampilkan menu
    cout << "Pilihan Menu:" << endl;
    cout << "1. Nilai Maksimum" << endl;
    cout << "2. Nilai Minimum" << endl;
    cout << "3. Nilai Rata-rata" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> choice;

    // Melakukan operasi sesuai pilihan menu
    switch (choice) {
        case 1: { // Mencari nilai maksimum
            int max = -2147483648;
            for (int i = 0; i < size; ++i) {
                if (arr[i] > max) {
                    max = arr[i];
                }
            }
            cout << "Nilai Maksimum: " << max << endl;
            break;
        }
        case 2: { // Mencari nilai minimum
            int min = 2147483647;
            for (int i = 0; i < size; ++i) {
                if (arr[i] < min) {
                    min = arr[i];
                }
            }
            cout << "Nilai Minimum: " << min << endl;
            break;
        }
        case 3: { // Mencari nilai rata-rata
            double sum = 0;
            for (int i = 0; i < size; ++i) {
                sum += arr[i];
            }
            double average = sum / size;
            cout << "Nilai Rata-rata: " << average << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
