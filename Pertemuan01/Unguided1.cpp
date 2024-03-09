/*
oleh Jordan Angkawijaya - 2311102139
*/

#include <iostream>
#include <cmath> // Library untuk fungsi pemangkatan dibawah

using namespace std;

char Choice_2139; // Data primitif char untuk pilihan menu Choice_2139
float One_2139, Two_2139; // Data primitif float untuk bilangan pertama dan kedua supaya bisa menyimpan bilangan desimal

void JordanProgramStart_2139() { // Fungsi untuk menampilkan menu pilihan
    cout << "KALKULATOR JORDAN";
    cout << "\nA. Penjumlahan";
    cout << "\nB. Perkalian";
    cout << "\nC. Pembagian";
    cout << "\nD. Pengurangan";
    cout << "\nE. Pangkat" << endl;
    cout << "Masukkan Pilihan : ";
    cin >> Choice_2139;
}

float AdditionLogic_2139() { // Fungsi Penjumlahan
    cout << "\n--- PENJUMLAHAN ---" << endl;
    cout << "Bilangan pertama : ";
    cin >> One_2139;
    cout << "Ditambah bilangan kedua : ";
    cin >> Two_2139;
    cout << "Hasil penjumlahan : ";
    return One_2139 + Two_2139; // Mengembalikan hasil penjumlahan
}

float MultiplicationLogic_2139() { // Fungsi Perkalian
    cout << "\n--- PERKALIAN ---" << endl;
    cout << "Bilangan pertama : ";
    cin >> One_2139;
    cout << "Dikali bilangan kedua : ";
    cin >> Two_2139;
    cout << "Hasil perkalian : ";
    return One_2139 * Two_2139; // Mengembalikan hasil perkalian
}

float DivisionLogic_2139() { // Fungsi Pembagian
    cout << "\n--- PEMBAGIAN ---" << endl;
    cout << "Bilangan pertama : ";
    cin >> One_2139;
    cout << "Dibagi bilangan kedua : ";
    cin >> Two_2139;
    cout << "Hasil pembagian : ";
    return One_2139 / Two_2139; // Mengembalikan hasil pembagian
}

float SubtractionLogic_2139() { // Fungsi Pengurangan
    cout << "\n--- PENGURANGAN ---" << endl;
    cout << "Bilangan pertama : ";
    cin >> One_2139;
    cout << "Dikurangi bilangan kedua : ";
    cin >> Two_2139;
    cout << "Hasil pengurangan : ";
    return One_2139 - Two_2139; // Mengembalikan hasil pengurangan
}

float SquaredLogic_2139() { // Fungsi Pemangkatan
    cout << "\n--- PEMANGKATAN ---" << endl;
    cout << "Bilangan pertama : ";
    cin >> One_2139;
    cout << "Dipangkati bilangan kedua : ";
    cin >> Two_2139;
    cout << "Hasil pemangkatan : ";
    return pow(One_2139, Two_2139); // Mengembalikan hasil pemangkatan dan pow itu fungsi dari library cmath diatas
}

int main() {
    do { // Looping menu pilihan
        JordanProgramStart_2139();
        switch (Choice_2139) { // Switch case untuk memilih menu
            case 'A':
            case 'a':
                cout << AdditionLogic_2139() << "\n" << endl; // Jika user memilih A/a, maka akan menjalankan fungsi penjumlahan
                break;
            case 'B':
            case 'b':
                cout << MultiplicationLogic_2139() << "\n" << endl; // Jika user memilih B/b, maka akan menjalankan fungsi perkalian
                break;
            case 'C':
            case 'c':
                cout << DivisionLogic_2139() << "\n" << endl; // Jika user memilih C/c, maka akan menjalankan fungsi pembagian
                break;
            case 'D':
            case 'd':
                cout << SubtractionLogic_2139() << "\n" << endl; // Jika user memilih D/d, maka akan menjalankan fungsi pengurangan
                break;
            case 'E':
            case 'e':
                cout << SquaredLogic_2139() << "\n" << endl; // Jika user memilih E/e, maka akan menjalankan fungsi pemangkatan
                break;
            default:
                cout << "\nUhh.. not a valid number so yea goodbye" << endl;
                return 0;
        }
    } while (Choice_2139 != 0); // Looping akan terus berjalan selama user tidak memilih 0

    return 0;
}
