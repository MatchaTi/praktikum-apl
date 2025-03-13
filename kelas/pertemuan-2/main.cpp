#include <iostream>
#include <iterator>
using namespace std;

int main() {
  string nama[5] = {"Dimas", "Harahap", "Santoso", "Kalingga", "Ucup"};

  /*int angka[3];*/
  /*angka[0] = 1;*/
  /*angka[1] = 2;*/
  /*angka[2] = 3;*/
  /**/

  /*int angka[5] = {1, 2, 3, 4, 5};*/
  /*int panjang1 = sizeof(angka) / sizeof(angka[0]);*/
  /**/
  /*angka[1] = 6;*/
  /**/
  /*for (int i = 0; i < panjang1; i++) {*/
  /*  cout << angka[i] << endl;*/
  /*}*/
  /*cout << "Array: " << angka << endl;*/
  /**/
  /**/
  /*for (int i = 0; i < panjang1; i++) {*/
  /*  cout << angka[i] << endl;*/
  /*}*/

  /*for (int item : angka) {*/
  /*  cout << item << endl;*/
  /*}*/

  /*int panjang2 = sizeof(angka) / sizeof(int);*/
  /**/
  /*cout << "Panjang 1\t: " << panjang1 << endl;*/
  /*cout << "Panjang 2\t: " << panjang2 << endl;*/
  /**/
  /*cout << sizeof(int) << endl;*/
  /*cout << sizeof(double) << endl;*/
  /*cout << sizeof(bool) << endl;*/
  /*cout << sizeof(string) << endl;*/

  /*cout << "Nama\t: " << nama[1] << endl;*/
  /*cout << "Angka\t: " << angka[2] << endl;*/

  /*int angka[3][2] = {*/
  /*    {1, 2},*/
  /*    {3, 4},*/
  /*    {5, 6},*/
  /*};*/

  int angka[2][3][2] = {{{1, 2}, {3, 4}, {5, 6}}, {{7, 8}, {9, 10}, {11, 12}}};
  /*int angka[2][3][2] = {*/
  /*  {*/
  /*    {1,2},*/
  /*    {3,4},*/
  /*    {5,6}*/
  /*  },*/
  /*  {*/
  /*    {7,8},*/
  /*    {9,10},*/
  /*    {11,12}*/
  /*  }*/
  /*};*/

  cout << angka[0][1][0] << endl;
  return 0;
}
