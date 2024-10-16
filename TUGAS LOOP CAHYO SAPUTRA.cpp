#include <iostream>
using namespace std;

int main()
{
    int data, odd = 0, even = 0;
    cout << "Masukkan jumlah data: "; cin >> data;

    for (int x = 0; x <= data; x++) {
        if (x % 2 == 0) {
            even += x;
        }
        else {
            odd += x;
        }
    }

    cout << "Jumlah total bilangan ganjil: " << odd;
    cout << "\nJumlah total bilangan genap: " << even;

    return 0;
}