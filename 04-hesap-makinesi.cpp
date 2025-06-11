/*
Kullanıcıdan bir sayı, bir işlem, bir sayı al ve sonucu ekrana yazdır.
*/

#include <iostream>
using namespace std;

int main()
{
    int sayi1, sayi2;
    char islem;

    cout << "Birinci sayi: ";
    cin >> sayi1;

    cout << "islem: ";
    cin >> islem;

    cout << "Ikinci sayi: ";
    cin >> sayi2;

    switch (islem)
    {
    case '+':
        cout << "Sonuc: " << sayi1 + sayi2;
        break;

    case '-':
        cout << "Sonuc: " << sayi1 - sayi2;
        break;

    case '*':
        cout << "Sonuc: " << sayi1 * sayi2;
        break;

    case '/':
        cout << "Sonuc: " << sayi1 / sayi2;
        break;

    default:
        cout << "hatalı islem";
        break;
    }

    return 0;
}