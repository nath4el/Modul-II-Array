#include <iostream>
#include <vector>
#include <algorithm>
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

    int choice;
    do {
     
        cout << "\nMenu:\n";
        cout << "1. Cari nilai maksimum\n";
        cout << "2. Cari nilai minimum\n";
        cout << "3. Cari nilai rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int maximum = *max_element(arr.begin(), arr.end());
                cout << "Nilai maksimum: " << maximum << endl;
                break;
            }
            case 2: {
                int minimum = *min_element(arr.begin(), arr.end());
                cout << "Nilai minimum: " << minimum << endl;
                break;
            }
            case 3: {
                double total = 0;
                for (int i = 0; i < size; i++) {
                    total += arr[i];
                }
                double average = total / size;
                cout << "Nilai rata-rata: " << average << endl;
                break;
            }
            case 4:
                cout << "Terima kasih telah menggunakan program ini.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih kembali.\n";
        }
    } while (choice != 4);

    return 0;
}
