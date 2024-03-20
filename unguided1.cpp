#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;

   
    cout << "Masukkan panjang array: ";
    cin >> size;

   
    vector<int> arr(size);


    cout << "Masukkan " << size << " angka:\n";
    for (int i = 0; i < size; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }

  
    cout << "\nData Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i != size - 1)
            cout << " ";
    }
    cout << endl;

   
    cout << "Nomor Genap: ";
    bool genap_exist = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            if (genap_exist)
                cout << ", ";
            cout << arr[i];
            genap_exist = true;
        }
    }
    if (!genap_exist)
        cout << "Tidak ada nomor genap";
    cout << endl;

  
    cout << "Nomor Ganjil: ";
    bool ganjil_exist = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            if (ganjil_exist)
                cout << ", ";
            cout << arr[i];
            ganjil_exist = true;
        }
    }
    if (!ganjil_exist)
        cout << "Tidak ada nomor ganjil";
    cout << endl;

    return 0;
}
