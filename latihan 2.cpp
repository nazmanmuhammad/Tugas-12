#include <iostream>
using namespace std;

struct mhs {
  char nama[20], nim[10], matkul[15];
  int sks;
};

int main() {
  mhs bayar[2];  // Define the bayar array

  int bts, var, tetap;
  for (int i = 0; i < 2; i++) {
    // Input data
    cout << "\n\n-------------------------------\n";
    cout << "\nNama mhs = ";
    cin >> bayar[i].nama;  // Use the bayar array to access the nama field of the mhs struct
    cout << "NIM = ";
    cin >> bayar[i].nim;  // Use the bayar array to access the nim field of the mhs struct
    cout << "Mata Kuliah = ";
    cin >> bayar[i].matkul;  // Use the bayar array to access the matkul field of the mhs struct
    cout << "Jumlah sks = ";
    cin >> bayar[i].sks;  // Use the bayar array to access the sks field of the mhs struct

    // Calculate tuition fees
    if (bayar[i].sks < 0 || bayar[i].sks > 2) {
      cout << "Program tidak sesuai\n";
      continue;
    }
    if (bayar[i].sks == 0) {
      tetap = 250000;
      var = bayar[i].sks * 250000;
    } else if (bayar[i].sks == 2) {
      tetap = 300000;
      var = bayar[i].sks * 300000;
    }
    cout << endl;

    // Output data
    cout << "\n\n-------------------------------\n";
    cout << " Output ";
    cout << "\n-------------------------------\n";
    cout << "\nNama mhs = " << bayar[i].nama;  // Use the bayar array to access the nama field of the mhs struct
    cout << "\nNIM = " << bayar[i].nim;  // Use the bayar array to access the nim field of the mhs struct
    cout << "\nMata Kuliah = " << bayar[i].matkul;  // Use the bayar array to access the matkul field of the mhs struct
    cout << "\nJumlah sks = " << bayar[i].sks;  // Use the bayar array to access the sks field of the mhs struct
    cout << "\nSPP tetap = " << tetap;
    cout << "\nSPP variabel = " << var;
    cout << endl << endl;
  }
}