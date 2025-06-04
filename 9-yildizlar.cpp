/*
Kullanıcıdan bir sayı alarak o sayı kadar yıldızı alt alta
ekrana yazdıran programı yazınız.
*/

#include <iostream>
using namespace std;

int main()
{
    int ySayisi;

    cout << "Yildiz sayisi: ";
    cin >> ySayisi;

    for (int i = 0; i < ySayisi; i++)
    {
        cout << "*" << endl;
    }

    return 0;
}