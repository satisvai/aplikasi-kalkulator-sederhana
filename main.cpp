#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    int choice;
    double result;

    // Meminta input dari pengguna
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;

    // Menampilkan menu operasi
    cout << "Pilih operasi:" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Pembagian" << endl;
    cout << "4. Perkalian" << endl;
    cout << "Masukkan pilihan (1/2/3/4): ";
    cin >> choice;

    // Melakukan operasi berdasarkan pilihan pengguna menggunakan if/else
    if (choice == 1) {
        result = num1 + num2;
        cout << "Hasil penjumlahan: " << result << endl;
    } else if (choice == 2) {
        result = num1 - num2;
        cout << "Hasil pengurangan: " << result << endl;
    } else if (choice == 3) {
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Hasil pembagian: " << result << endl;
        } else {
            cout << "Error: Pembagian oleh nol tidak diizinkan." << endl;
        }
    } else if (choice == 4) {
        result = num1 * num2;
        cout << "Hasil perkalian: " << result << endl;
    } else {
        cout << "Error: Pilihan tidak valid." << endl;
    }

    return 0;
}
