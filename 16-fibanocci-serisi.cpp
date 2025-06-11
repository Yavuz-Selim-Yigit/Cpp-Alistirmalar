/*
Kullanıcıdan alınan sayıya kadar olan fibanocci sayılarını yazdıran
programı yazınız

fonksiyo ile
*/
#include <iostream>
using namespace std;

int main()
{
    int n, sayi1 = 1, sayi2 = 1, sayi3 = sayi1 + sayi2;

    cout << "Siniri belirleyiniz : ";
    cin >> n;

    cout << sayi1 << endl
         << sayi2 << endl;
    while (sayi3 <= n)
    {
        sayi3 = sayi1 + sayi2;
        sayi1 = sayi2;
        sayi2 = sayi3;

        cout << sayi3 << endl;
    }

    return 0;
}