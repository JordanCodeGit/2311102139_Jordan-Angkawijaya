/*
3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari
array dengan map

oleh Jordan Angkawijaya - 2311102139
*/

/*
A. Perbedaan Array dengan Map
1. Indeks
- Array harus bilangan bulat non-negatif & mulai berurutan dari 0
- Map dapat berupa nilai berapa pun & tidak harus berurutan
2. Ukuran
- Array harus dideklarasikan dengan ukuran yang tetap
- Map dapat dideklarasikan dengan ukuran yang dinamis
3. Tipe Data
- Array hanya dapat menggunakan tipe data primitif
- Map dapat menggunakan tipe data apapun
4. Penggunaan
- Array digunakan untuk menyimpan data yang berurutan
- Map digunakan untuk menyimpan data yang tidak berurutan dan perlu diakses berdasarkan key
*/

// B. Contoh Program Fungsi Map
#include <iostream>
#include <map> // Library supaya bisa menggunakan fungsi map dibawah

using namespace std;

int main() {
    
    // Deklarasi map dengan key int dan value string
    map<int, string> food_2139;
  
    // Menambahkan elemen-elemen ke dalam map
    food_2139[1] = "Hamburger";
    food_2139[2] = "Fried Chicken";
    food_2139[3] = "Stew";
    food_2139[4] = "Roasted Duck";
    food_2139[5] = "Ramen";

    cout << "-=-= Welcome to Jordan's Food Menu! =-=-" << endl;
    for (int i = 1; i <= food_2139.size(); ++i) { // Looping untuk menampilkan semua elemen map
        cout << "No." << i << " " << food_2139[i] << endl; // Menampilkan elemen map
    }

    return 0;
}