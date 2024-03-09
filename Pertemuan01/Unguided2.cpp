/*
2. Jelaskan fungsi dari class dan struct secara 
detail dan berikan contoh programnya!

oleh Jordan Angkawijaya - 2311102139
*/

/*
A. Fungsi dari Class
Class adalah salah satu dari konsep OOP yang digunakan untuk membungkus 
data abstraksi procedural sebagai deskripsi tergeneralisir atau rancangan 
dari sebuah object untuk mendefinisikan atau menggambarkan isi dan 
tingkah laku sebagai entitas dari object.

B. Fungsi dari Struct
Data struktur, atau Struct dalam pemrograman C++, adalah sekumpulan data 
yang dikelompokkan ke dalam sebuah “tabel” yang memiliki elemen-elemenyang saling terkait.
Struct digunakan apabila data yang ingin dikelompokkan memiliki tipe data yang berbeda atau membuat
struktur dari suatu record.
*/

// C. Contoh Program Struct dan Class
#include <iostream>

using namespace std;

// Struct Person_2139 yang berisi data nama string dan umur int
struct Person_2139 {
    string Name_2139;
    int Age_2139;
};

// Class Vehicle_2139 yang berisi data brand string, model string, dan tahun rilis int dalam akses public
class Vehicle_2139 {
  public:
    string Brand_2139;   
    string Model_2139;
    int YearReleased_2139;
};

int main() {
    cout << "-=-= Declaration of Struct and Class by Jordan =-=-" << endl;

    // Deklarasi Struct Person_2139
    Person_2139 person{"Jordan Angkawijaya", 20};
    cout << "\n- Biography - " << endl;
    cout << "Name: " << person.Name_2139 << endl;
    cout << "Age: " << person.Age_2139 << endl;

    // Deklarasi Class Vehicle_2139
    Vehicle_2139 vehicle;
    vehicle.Brand_2139 = "Honda";
    vehicle.Model_2139 = "CB750";
    vehicle.YearReleased_2139 = 1969;
    cout << "\n- Jordan's Vehicle -" << endl;
    cout << "Vehicle brand: " << vehicle.Brand_2139 << endl;
    cout << "Vehicle model: " << vehicle.Model_2139 << endl;
    cout << "Vehicle year released: " << vehicle.YearReleased_2139 << endl;

    return 0;
}