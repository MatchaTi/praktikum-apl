#include <iostream>
using namespace std;

struct Address {
  string kota;
  string provinsi;
  string negara;
};

// menggunakan dereference
int ubahNilai(int *, int b);

// menggunakan addressof
int ubahNilai(int &, int b);

int main() {
  // Address address1;
  //
  // address1.kota = "Samarinda";
  // address1.provinsi = "Kalimantan Timur";
  // address1.negara = "Indonesia";
  //
  // Address *address2 = &address1;
  //
  // address2->kota = "Tenggarong";

  // cout << "Kota 1: " << address1.kota << endl;
  // cout << "Kota 2: " << address2->kota << endl;
  //
  int a = 5;
  // variable biasa
  int b = 10;

  // menggunakan dereference
  // ubahNilai(&a, b);
  //
  // menggunakan addressof
  ubahNilai(a, b);

  cout << "Nilai a: " << a << endl;
  cout << "alamat a main: " << &a << endl;

  // variable pointer
  // int *b = &a;
  //
  // *b = 10;
  // cout << "Nilai a: " << a << endl;
  // cout << "Alamat a: " << &a << endl;
  // cout << "Nilai b: " << *b << endl;
  // cout << "Alamat b: " << b << endl;

  return 0;
}

// menggunakan dereference
int ubahNilai(int *a, int b) {
  cout << "Alamat a fungsi: " << a << endl;
  return *a = b;
}

// menggunakan address of
int ubahNilai(int &a, int b) {
  cout << "Alamat a fungsi: " << &a << endl;
  return a = b;
}
