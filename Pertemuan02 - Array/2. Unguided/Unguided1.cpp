/*
oleh Jordan Angkawijaya - 2311102139
*/

#include <iostream>

using namespace std;

int main() {
    const int SizeLimit_2139 = 10; // Maksimal 10 angka, dengan const agar tidak terubah
    int Data_2139[SizeLimit_2139]; // Array untuk menyimpan angka
    int DataAmount_2139 = 0; // Jumlah angka yang sudah dimasukkan, 0 karena belum ada angka yang dimasukkan

    cout << "\n-=-= Jordan's Odd and Even Number Program =-=-" << endl;
    cout << "- Program ini memperbolehkan inputan hingga 10 angka" << endl;
    cout << "- Jika ingin berhenti input atau ingin input angka kurang dari 10, silakan diakhiri dengan titik (.)" << endl;
    cout << "\nInput angka: " << endl;
    
    // DataAmount_2139 akan terus bertambah sampai DataAmount_2139 mencapai SizeLimit_2139 atau input tidak valid
    while (DataAmount_2139 < SizeLimit_2139 && cin >> Data_2139[DataAmount_2139]) { 
        DataAmount_2139++;
    }

    cout << "\n-=-=- HASIL -=-=-" << endl;

    // Menampilkan data array yang sudah diinput oleh user
    cout << "Data array: ";
    for (int i = 0; i < DataAmount_2139; ++i) // Melakukan perulangan untuk menampilkan data array
        cout << Data_2139[i] << " ";
    cout << endl;

    // Menampilkan angka genap, jika angkanya habis dibagi 2 maka akan ditampilkan
    cout << "Nomor genap  : ";
    for (int i = 0; i < DataAmount_2139; ++i) { // Melakukan perulangan untuk mengecek angka genap
        if (Data_2139[i] % 2 == 0)
            cout << Data_2139[i] << " ";
    }
    cout << endl;

    // Menampilkan angka ganjil, jika angkanya tidak habis dibagi 2 maka akan ditampilkan
    cout << "Nomor ganjil : ";
    for (int i = 0; i < DataAmount_2139; ++i) { // Melakukan perulangan untuk mengecek angka ganjil
        if (Data_2139[i] % 2 != 0)
            cout << Data_2139[i] << " ";
    }
    cout << endl;

    return 0;
}
