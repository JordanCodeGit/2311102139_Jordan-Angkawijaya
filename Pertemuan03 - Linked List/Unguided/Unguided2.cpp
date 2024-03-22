/*
by Jordan Angkawijaaya - 2311102139
*/

#include <iostream>
using namespace std;

// Deklarasi Struct Node
class Node {
public:
    string Product_2139;
    int Price_2139;
    Node* prev;
    Node* next;
};

// Deklarasi Class DoublyLinkedList
class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    // Constructor
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Prosedur untuk menambahkan data di depan
    void push(int Price_2139, string Product_2139) {
        Node* newNode = new Node;
        newNode->Price_2139 = Price_2139;
        newNode->Product_2139 = Product_2139;
        newNode->prev = nullptr;
        newNode->next = head;

        if (head != nullptr) {
            head->prev = newNode;
        }
        else {
            tail = newNode;
        }

        head = newNode;
    }

    // Prosedur untuk menghapus data di depan
    void pop() {
        if (head == nullptr) {
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != nullptr) {
            head->prev = nullptr;
        }
        else {
            tail = nullptr;
        }

        delete temp;
    }

    // Fungsi untuk mengupdate data
    bool update(string oldProduct, string newProduct, int newPrice) {
        Node* current = head;

        while (current != nullptr) {
            if (current->Product_2139 == oldProduct) {
                current->Product_2139 = newProduct;
                current->Price_2139 = newPrice;
                return true;
            }
            current = current->next;
        }

        return false;
    }

    // Prosedur untuk menghapus semua data
    void deleteAll() {
        Node* current = head;

        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }

        head = nullptr;
        tail = nullptr;
    }

    // Prosedur untuk menampilkan data
    void display() {
        Node* current = head;

        while (current != nullptr) {
            cout << current->Product_2139 << " " << current->Price_2139 << endl;
            current = current->next;
        }

        cout << endl;
    }
};

int main() {
    DoublyLinkedList list; // Deklarasi objek list dari class DoublyLinkedList

    cout << "\n-=-=-= WELCOME TO TOKO SKINCARE PURWOKERTO =-=-=-" << endl;
    
    // Deklarasi data awal dari Toko Skincare Purwokerto
    cout << "\n-Nama Produk- ㅤㅤ-Harga-" << endl;
    list.push(30000, " Hanasui  ㅤㅤㅤㅤ");
    list.push(50000, " Wardah ㅤㅤㅤㅤㅤ");
    list.push(100000, " Skintific ㅤㅤㅤ");
    list.push(150000, " Somethinc ㅤㅤㅤ");
    list.push(60000, " Originote  ㅤㅤ  ");
    list.display(); // Menampilkan data awal

    while (true) { // Looping untuk menampilkan menu
        cout << "\nMenu Toko Skincare Purwokerto" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;

        int Choice_2139;
        cout << "Pilih Opsi: ";
        cin >> Choice_2139;

        switch (Choice_2139) {
            // Case untuk menambahkan data
            case 1: {
                int Price_2139;
                string Product_2139;

                cout << "\n-=- TAMBAH PRODUK SKINCARE -=-" << endl;
                cout << "Tambahkan produk skincare: ";
                cin.ignore(); // Mengabaikan karakter newline dari cin sebelumnya
                getline(cin, Product_2139); // Menggunakan getline agar bisa membaca spasi
                cout << "Harga produk: ";
                cin >> Price_2139;
                list.push(Price_2139, Product_2139); // Memanggil prosedur push untuk menambahkan data
                cout << "Produk berhasil ditambahkan!" << endl;
                break;
            }

            // Case untuk menghapus data
            case 2: {
                list.pop(); // Memanggil prosedur pop untuk menghapus data
                cout << "Produk berhasil dimusnahkan!";
                break;
            }

            // Case untuk mengupdate data
            case 3: {
                string oldProduct, newProduct; // Deklarasi variabel oldProduct dan newProduct
                int newPrice; // Deklarasi variabel newPrice

                cout << "\n-=- UPDATE PRODUK SKINCARE -=-";
                cout << "Input produk yang ingin digantikan: "; cin >> oldProduct;               
                cout << "Input produk skincare baru: "; cin >> newProduct;
                cout << "Input harga baru: "; cin >> newPrice;

                bool updated = list.update(oldProduct, newProduct, newPrice); // Memanggil fungsi update untuk mengupdate data
                cout << "Data berhasil diupdate!" << endl;

                if (!updated) {
                    cout << "Uhh data tidak ditemukan!?" << endl;
                }
                break;
            }

            // Case untuk menambahkan data pada posisi tertentu
            case 4: {
                int position, Price_2139;
                string Product_2139;

                cout << "\n-=- UPDATE PRODUK SKINCARE DENGAN POSISI -=-";
                cout << "Input posisi untuk produk baru: " << endl;
                cin >> position; // Memasukkan posisi data yang ingin ditambahkan
                cout << "Input produk skincare baru: " << endl;
                cin.ignore(); // Mengabaikan karakter newline dari cin sebelumnya
                getline(cin, Product_2139); // Menggunakan getline agar bisa membaca spasi
                cout << "Input harga: " << endl;
                cin >> Price_2139;
                cout << "Produk berhasil ditambahkan pada posisi ke-" << position << "!" << endl;
                break;
            }

            // Case untuk menghapus data pada posisi tertentu
            case 5: {
                int position; // Deklarasi variabel position

                cout << "\n-=- HAPUS PRODUK SKINCARE DENGAN POSISI -=-";
                cout << "Enter position to delete data: ";
                cin >> position; // Memasukkan posisi data yang ingin dihapus
                cout << "Data berhasil dihapus pada posisi ke-" << position << "!" << endl;
                break;
            }

            // Case untuk menghapus semua data
            case 6: {
                list.deleteAll(); // Memanggil prosedur deleteAll untuk menghapus semua data
                cout << "Wah, semua data terhapus!" << endl;
                break;
            }

            // Case untuk menampilkan data
            case 7: {
                cout << "\n-Nama Produk- ㅤㅤ-Harga-" << endl;
                list.display(); // Menampilkan data
                break;
            }

            // Case untuk keluar dari program
            case 8: {
                cout << "Exiting. . ." << endl;
                return 0;
            }
        }
    }

    return 0;
}
