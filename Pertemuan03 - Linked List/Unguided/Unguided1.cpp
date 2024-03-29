/*
by Jordan Angkawijaya - 2311102139
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Deklarasi Struct Node
struct Node {
    string Name_2139;
    int Age_2139;
    Node* next;
};

Node* head;
Node* tail;

//Inisialisasi Node
void Initialize_2139() {
    head = NULL;
    tail = NULL;
}

// Pengecekan
bool ItsEmpty_2139() {
    if (head == NULL)
        return true;
    else
        return false;
}

//Tambah Depan
void InsertFront_2139(string name, int age) {
    //Buat Node baru
    Node* baru = new Node;
    baru->Name_2139 = name;
    baru->Age_2139 = age;
    baru->next = NULL;

    if (ItsEmpty_2139() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        baru->next = head;
        head = baru;
    }
}

//Tambah Belakang
void InsertBack_2139(string name, int age) {
    //Buat Node baru
    Node* baru = new Node;
    baru->Name_2139 = name;
    baru->Age_2139 = age;
    baru->next = NULL;

    if (ItsEmpty_2139() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        tail->next = baru;
        tail = baru;
    }
}

//Hitung Jumlah List
int CountList_2139() {
    Node* hitung;
    hitung = head;
    int jumlah = 0;

    while (hitung != NULL) {
        jumlah++;
        hitung = hitung->next;
    }

    return jumlah;
}

//Tambah Tengah
void InsertMiddle_2139(string name, int age, int posisi) {
    if (posisi < 1 || posisi > CountList_2139()) {
        cout << "Heyyy, the position is out of range!" << endl;
    }
    else if (posisi == 1) {
        cout << "Wow, the position you input wasn't the middle." << endl;
    }
    else {
        Node* baru, * bantu;
        baru = new Node();
        baru->Name_2139 = name;
        baru->Age_2139 = age;

        // tranversing
        bantu = head;
        int nomor = 1;

        while (nomor < posisi - 1) {
            bantu = bantu->next;
            nomor++;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }
}

//Hapus Depan
void EraseFront_2139() {
    Node* hapus;

    if (ItsEmpty_2139() == false) {
        if (head->next != NULL) {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else {
            head = tail = NULL;
        }
    }
    else {
        cout << "ITS EMPTY!" << endl;
    }
}

//Hapus Belakang
void EraseBack_2139() {
    Node* hapus;
    Node* bantu;

    if (ItsEmpty_2139() == false) {
        if (head != tail) {
            hapus = tail;
            bantu = head;

            while (bantu->next != tail) {
                bantu = bantu->next;
            }

            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else {
            head = tail = NULL;
        }
    }
    else {
        cout << "ITS EMPTY!" << endl;
    }
}

//Hapus Tengah
void EraseMiddle_2139(int posisi) {
    Node* hapus, * bantu, * bantu2;

    if (posisi < 1 || posisi > CountList_2139()) {
        cout << "Heyyy, the position is out of range!" << endl;
    }
    else if (posisi == 1) {
        cout << "Wow, the position you input wasn't the middle." << endl;
    }
    else {
        int nomor = 1;
        bantu = head;

        while (nomor <= posisi) {
            if (nomor == posisi - 1) {
                bantu2 = bantu;
            }

            if (nomor == posisi) {
                hapus = bantu;
            }

            bantu = bantu->next;
            nomor++;
        }

        bantu2->next = bantu;
        delete hapus;
    }
}

//Ubah Depan
void ChangeFront_2139(string name, int age) {
    if (ItsEmpty_2139() == false) {
        head->Name_2139 = name;
        head->Age_2139 = age;
    }
    else {
        cout << "THERE'S NOTHING TO CHANGE!" << endl;
    }
}

//Ubah Tengah
void ChangeMiddle_2139(string name, int age, int posisi) {
    Node* bantu;

    if (ItsEmpty_2139() == false) {
        if (posisi < 1 || posisi > CountList_2139()) {
            cout << "Heyyy, the position is out of range!" << endl;
        }
        else if (posisi == 1) {
            cout << "Wow, the position you input wasn't the middle." << endl;
        }
        else {
            bantu = head;
            int nomor = 1;

            while (nomor < posisi) {
                bantu = bantu->next;
                nomor++;
            }

            bantu->Name_2139 = name;
            bantu->Age_2139 = age;
        }
    }
    else {
        cout << "ITS EMPTY!" << endl;
    }
}

//Ubah Belakang
void ChangeBack_2139(string name, int age) {
    if (ItsEmpty_2139() == false) {
        tail->Name_2139 = name;
        tail->Age_2139 = age;
    }
    else {
        cout << "ITS EMPTY" << endl;
    }
}

//Hapus List
void EraseList_2139() {
    Node* bantu, * hapus;
    bantu = head;

    while (bantu != NULL) {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }

    head = tail = NULL;
    cout << "Hoorah! You erased EVERYTHING YOU WORKED HARD FOR!" << endl;
}

//Tampilkan List
void Reveal_2139() {
    Node* bantu;
    bantu = head;

    cout << left << setw(15) << "-Nama-" << right << setw(4) << "-Usia-" << endl; // Supaya rapi

    if (ItsEmpty_2139() == false) {
        while (bantu != NULL) {
            cout << left << setw(15) << bantu->Name_2139 << right << setw(4) << bantu->Age_2139 << endl; // Supaya lurus di output
            bantu = bantu->next;
        }

        cout << endl;
    }
    else {
        cout << "ITS EMPTY!" << endl;
    }
}

int main() {
    Initialize_2139(); // Inisialisasi Linked List
    cout << "\n-=-=-= WELCOME TO JORDAN'S PROGRAM =-=-=-" << endl; // Menampilkan nama dan umur awal & menjawab poin a
    InsertFront_2139("Karin", 18);
    InsertFront_2139("Hoshino", 18);
    InsertFront_2139("Akechi", 20); 
    InsertFront_2139("Yusuke", 19);
    InsertFront_2139("Michael", 18);
    InsertFront_2139("Jane", 20);
    InsertFront_2139("John", 19);
    InsertFront_2139("Jordan", 20);
    Reveal_2139();

    // Menjawab poin b
    cout << "-=-=-= (B) Penghapusan data 'Akechi' =-=-=-" << endl;
    EraseMiddle_2139(6);
    Reveal_2139();

    // Menjawab poin c
    cout << "-=-=-= (C) Penambahan data 'Futaba (18)' diantara John & Jane =-=-=-" << endl;
    InsertMiddle_2139("Futaba", 18, 3);
    Reveal_2139();

    // Menjawab poin d
    cout << "-=-=-= (D) Penambahan data 'Igor (20)' di awal =-=-=-" << endl;
    InsertFront_2139("Igor", 20);
    Reveal_2139();

    // Menjawab poin e & f
    cout << "-=-=-= (E) Mengubah data 'Michael' menjadi 'Reyn (18)' =-=-=-" << endl;
    cout << "-=-=-= (F) Tampilan Akhir! =-=-=-" << endl;
    ChangeMiddle_2139("Reyn", 18, 6);
    Reveal_2139();

    return 0;
}
