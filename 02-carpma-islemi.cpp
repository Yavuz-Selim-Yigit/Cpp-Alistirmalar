/*
Kullanıcıdan 2 adet int sayı alınız ve çarpınız.
sonucu ekrana yazdırınız.
*/

#include <iostream>
using namespace std;

int main()
{
    int sayi1, sayi2, carpim = 1;
    cout << "Lutfen 1. sayiyi giriniz: ";
    cin >> sayi1;
    cout << "Lutfen 2. sayiyi giriniz: ";
    cin >> sayi2;

    carpim = sayi1 * sayi2;

    cout << "Carpim sonucu: " << carpim << endl;

    return 0;
}