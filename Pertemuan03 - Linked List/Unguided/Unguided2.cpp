/*
by Jordan Angkawijaaya - 2311102139
*/

#include <iostream>
#include <iomanip>
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
    void Push_2139(int Price_2139, string Product_2139) {
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

    // Prosedur untuk menambahkan data pada posisi tertentu
    void PushPosition_2139(int position, int Price_2139, string Product_2139) {
        if (position < 1) { // Jika posisi data kurang dari 1
            cout << "There's no position below 1.. you know that, right?" << endl;
            return;
        }

        Node* newNode = new Node;
        newNode->Price_2139 = Price_2139; // Mengisi data Price_2139
        newNode->Product_2139 = Product_2139; // Mengisi data Product_2139
        newNode->prev = nullptr; // Mengisi data prev
        newNode->next = nullptr; // Mengisi data next

        if (position == 1) {
            newNode->next = head;
            if (head != nullptr) // Jika head tidak kosong
                head->prev = newNode; // Menggeser head ke newNode
            else // Jika head kosong
                tail = newNode; // Menggeser tail ke newNode
            head = newNode;
            return;
        }

        Node* current = head; // Deklarasi variabel current
        for (int i = 1; i < position - 1 && current != nullptr; ++i) // Looping untuk mencari posisi data
            current = current->next; // Menggeser current ke next

        if (current == nullptr) { // Jika posisi data tidak ditemukan
            cout << "Whatever you input, it was wrong." << endl;
            delete newNode;
            return;
        }

        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != nullptr) // Jika current->next tidak kosong
            current->next->prev = newNode;
        else // Jika current->next kosong
            tail = newNode;
        current->next = newNode;
    }

    // Prosedur untuk menghapus data di depan
    void Pop_2139() {
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

    // Prosedur untuk menghapus data pada posisi tertentu
    void PopPosition_2139(int position) {
        if (head == nullptr) { // Jika list kosong
            cout << "WHAT ARE YOU TRYING TO DELETE?? THE LIST IS EMPTY!" << endl;
            return;
        }

        Node* temp = head; // Deklarasi variabel temp
        for (int i = 1; i < position && temp != nullptr; ++i) { // Looping untuk mencari posisi data
            temp = temp->next; // Menggeser temp ke next
        }

        if (temp == nullptr) { // Jika posisi data tidak ditemukan
            cout << "Whatever you just input, it's wrong." << endl;
            return;
        }

        if (temp->prev != nullptr) { // Jika temp->prev tidak kosong
            temp->prev->next = temp->next; // Menggeser temp->prev ke temp->next
        } else { // Jika temp->prev kosong
            head = temp->next; // Menggeser head ke temp->next
        }

        if (temp->next != nullptr) { // Jika temp->next tidak kosong
            temp->next->prev = temp->prev; // Menggeser temp->next ke temp->prev
        } else { // Jika temp->next kosong
            tail = temp->prev; // Menggeser tail ke temp->prev
        }

        delete temp; // Menghapus temp
    }

    // Fungsi untuk mengupdate data
    bool Update_2139(string oldProduct, string newProduct, int newPrice) {
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
    void DeleteAll_2139() {
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
    void Display_2139() {
        Node* current = head;

        cout << left << setw(20) << "-Nama Produk-" << right << setw(6) << "-Harga-" << endl; // Supaya rapi

        while (current != nullptr) {
            cout << left << setw(20) << current->Product_2139 << right << setw(4) << current->Price_2139 << endl;
            current = current->next;
        }

        cout << endl;
    }
};

int main() {
    DoublyLinkedList list; // Deklarasi objek list dari class DoublyLinkedList

    cout << "\n-=-=-= WELCOME TO TOKO SKINCARE PURWOKERTO BY JORDAN =-=-=-" << endl;

    // Deklarasi data awal dari Toko Skincare Purwokerto
    list.Push_2139(30000, "Hanasui");
    list.Push_2139(50000, "Wardah");
    list.Push_2139(100000, "Skintific");
    list.Push_2139(150000, "Somethinc");
    list.Push_2139(60000, "Originote");
    list.Display_2139(); // Menampilkan data awal

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
                list.Push_2139(Price_2139, Product_2139); // Memanggil prosedur push untuk menambahkan data
                cout << "Produk berhasil ditambahkan!" << endl;
                break;
            }

            // Case untuk menghapus data
            case 2: {
                list.Pop_2139(); // Memanggil prosedur Pop_2139 untuk menghapus data
                cout << "Produk paling atas berhasil dimusnahkan!" << endl;
                break;
            }

            // Case untuk mengupdate data
            case 3: {
                string oldProduct, newProduct; // Declaring variables oldProduct and newProduct
                int newPrice; // Declaring variable newPrice

                cout << "\n-=- UPDATE PRODUK SKINCARE -=-" << endl;
                cout << "Input produk yang ingin digantikan: ";
                cin.ignore(); // Ignoring the newline character from the previous cin
                getline(cin, oldProduct); // Using getline to read the entire line
                cout << "Input produk skincare baru: ";
                getline(cin, newProduct);
                cout << "Input harga baru: ";
                cin >> newPrice;

                bool updated = list.Update_2139(oldProduct, newProduct, newPrice); // Calling the update function to update data
                if (updated) {
                    cout << "Data berhasil diupdate!" << endl;
                } else {
                    cout << "Uhh data tidak ditemukan!?" << endl;
                }
                break;
            }

            // Case untuk menambahkan data pada posisi tertentu
            case 4: {
                int position, Price_2139;
                string Product_2139;

                cout << "\n-=- TAMBAH PRODUK SKINCARE DENGAN POSISI -=-" << endl;
                cout << "Input posisi untuk produk baru: ";
                cin >> position; // Memasukkan posisi data yang ingin ditambahkan
                cout << "Input produk skincare baru: ";
                cin.ignore(); // Mengabaikan karakter newline dari cin sebelumnya
                getline(cin, Product_2139); // Menggunakan getline agar bisa membaca spasi
                cout << "Input harga: ";
                cin >> Price_2139;
                list.PushPosition_2139(position, Price_2139, Product_2139); // Memanggil prosedur PushPosition_2139 untuk menambahkan data pada posisi tertentu
                cout << "Produk berhasil ditambahkan pada posisi ke-" << position << "!" << endl;
                break;
            }

            // Case untuk menghapus data pada posisi tertentu
            case 5: {
                int position; // Deklarasi variabel position

                cout << "\n-=- HAPUS PRODUK SKINCARE DENGAN POSISI -=-" << endl;
                cout << "Enter position to delete data: ";
                cin >> position; // Memasukkan posisi data yang ingin dihapus
                list.PopPosition_2139(position); // Memanggil prosedur PopPosition_2139 untuk menghapus data pada posisi tertentu
                cout << "Data berhasil dihapus pada posisi ke-" << position << "!" << endl;
                break;
            }

            // Case untuk menghapus semua data
            case 6: {
                list.DeleteAll_2139(); // Memanggil prosedur DeleteAll_2139 untuk menghapus semua data
                cout << "Wah, semua data terhapus!" << endl;
                break;
            }

            // Case untuk menampilkan data
            case 7: {
                cout << "\n-=- DATA PRODUK SKINCARE -=-" << endl;
                list.Display_2139(); // Menampilkan data
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
