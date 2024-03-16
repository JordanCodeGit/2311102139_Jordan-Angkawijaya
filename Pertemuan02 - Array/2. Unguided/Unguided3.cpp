/*
oleh Jordan Angkawijaya - 2311102139
*/

#include <iostream>
using namespace std;

int main() {
    const int MaxSize_2139 = 10; // Maksimum ukuran array
    int arr[MaxSize_2139]; // Array untuk menyimpan elemen-elemen
    int Size_2139, Choice_2139; // Deklarasi variabel untuk menyimpan ukuran array dan pilihan menu

    cout << "\n-=-=-= Jordan's Complete Array Program =-=-=-" << endl;
    cout << "Masukkan ukuran array (max 10): "; // Meminta user untuk memasukkan ukuran array
    cin >> Size_2139;

    // Memastikan ukuran yang dimasukkan tidak melebihi batas maksimum
    if (Size_2139 > MaxSize_2139) {
        cout << "Uhh your array too long" << endl;
        return 1;
    }

    // Meminta user untuk memasukkan elemen-elemen array
    cout << "\nNext, masukkan elemen-elemen array[" << Size_2139 << "]: " << endl;
    for (int i = 0; i < Size_2139; ++i) {
        cout << "Array[" << i << "]: ";
        cin >> arr[i];
    }

    // Menampilkan menu
    do {
    cout << "\n-=-=-= Jordan's Pilihan Menu =-=-=-" << endl;
    cout << "1. Nilai Maksimum" << endl;
    cout << "2. Nilai Minimum" << endl;
    cout << "3. Nilai Rata-rata" << endl;
    cout << "4. Exit" << endl;
    cout << "Masukkan pilihan: ";
    cin >> Choice_2139;

    // Melakukan operasi sesuai pilihan menu
    switch (Choice_2139) {
        case 1: { // Mencari nilai maksimum
            int max = -2147483648; // Nilai minimum untuk integer, supaya nilai maksimum yang dicari pasti lebih besar
            for (int i = 0; i < Size_2139; ++i) { // Mencari nilai maksimum
                if (arr[i] > max) { // Jika nilai array lebih besar dari nilai maksimum
                    max = arr[i]; // Maka nilai maksimum diubah menjadi nilai array
                }
            }
            cout << "\nNilai Maksimum: " << max << endl;
            break;
        }

        case 2: { // Mencari nilai minimum
            int min = 2147483647; // Nilai maksimum untuk integer, supaya nilai minimum yang dicari pasti lebih kecil
            for (int i = 0; i < Size_2139; ++i) { // Mencari nilai minimum
                if (arr[i] < min) { // Jika nilai array lebih kecil dari nilai minimum
                    min = arr[i]; // Maka nilai minimum diubah menjadi nilai array
                }
            }
            cout << "\nNilai Minimum: " << min << endl;
            break;
        }

        case 3: { // Mencari nilai rata-rata
            double sum = 0; // Inisialisasi variabel untuk menyimpan jumlah elemen array
            for (int i = 0; i < Size_2139; ++i) { // Menjumlahkan semua elemen array
                sum += arr[i]; // Menjumlahkan semua elemen array
            }
            double average = sum / Size_2139; // Mencari rata-rata
            cout << "\nNilai Rata-rata: " << average << endl;
            break;
        }

        case 4: // Keluar dari program
            cout << "\nThanks for using Jordan's program!" << endl;
            return 0;

        default:
            cout << "\nWrong choice, try again" << endl;
        }

    } while (Choice_2139 != 0); // Looping menu pilihan

    return 0;
}
