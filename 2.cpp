#include <iostream>
using namespace std;

void tambah(int *c, int *d) {
  *c += 7;
  *d += 5;
  cout << endl;
  cout << "\nNilai di Akhir Fungsi Tambah()";
  cout << "\nc = " << *c << " d = " << *d;
}

int main() {
  int a, b;
  a = 4;
  b = 6;

  system("CLS");

  cout << "Nilai Sebelum Pemanggilan Fungsi";
  cout << "\na = " << a << " b = " << b;

  tambah(&a, &b);

  cout << endl;
  cout << "\nNilai Setelah Pemanggilan Fungsi";
  cout << "\na = " << a << " b = " << b << endl;

  system("pause");
  return 0;
}