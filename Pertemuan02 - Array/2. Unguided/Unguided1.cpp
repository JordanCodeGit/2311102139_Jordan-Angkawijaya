#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 10;
    int data[MAX_SIZE];
    int count = 0;

    cout << "Masukkan angka-angka dipisahkan dengan spasi (maksimal 100 angka): ";
    
    while (count < MAX_SIZE && cin >> data[count]) {
        count++;
    }

    cout << "Data array: ";
    for (int i = 0; i < count; ++i)
        cout << data[i] << " ";
    cout << endl;

    cout << "Nomor genap: ";
    for (int i = 0; i < count; ++i) {
        if (data[i] % 2 == 0)
            cout << data[i] << " ";
    }
    cout << endl;

    cout << "Nomor ganjil: ";
    for (int i = 0; i < count; ++i) {
        if (data[i] % 2 != 0)
            cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
