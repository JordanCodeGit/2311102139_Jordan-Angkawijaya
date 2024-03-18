/*
oleh Jordan Angkawijaya - 2311102139
*/

#include <iostream>
using namespace std;

int main()
{
    // Deklarasi isi array
    int SizeX_2139, SizeY_2139, SizeZ_2139;

    // Meminta input ukuran array dari user
    cout << "\n-=-=- Jordan's 3 Dimensional Array Program -=-=-" << endl;
    cout << "Masukkan ukuran 'x' dalam array: "; cin >> SizeX_2139;
    cout << "Masukkan ukuran 'y' dalam array: "; cin >> SizeY_2139;
    cout << "Masukkan ukuran 'z' dalam array: "; cin >> SizeZ_2139;

    // Deklarasi array tiga dimensi berdasarkan input user
    int arr[SizeX_2139][SizeY_2139][SizeZ_2139];

    // Input elemen array
    for (int x = 0; x < SizeX_2139; x++) // Looping untuk menginput nilai x dalam array
    {
        for (int y = 0; y < SizeY_2139; y++) // Looping untuk menginput nilai y dalam array
        {
            for (int z = 0; z < SizeZ_2139; z++) // Looping untuk menginput nilai z dalam array
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    // Tampilan array
    for (int x = 0; x < SizeX_2139; x++) // Looping untuk menampilkan nilai x dalam array
    {
        for (int y = 0; y < SizeY_2139; y++) // Looping untuk menampilkan nilai y dalam array
        {
            for (int z = 0; z < SizeZ_2139; z++) // Looping untuk menampilkan nilai z dalam array
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
