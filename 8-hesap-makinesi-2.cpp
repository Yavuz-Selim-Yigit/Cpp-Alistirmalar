/*
Bir sayı, bir işlem ve yeniden bir sayı istenip işlem yapılır.
İşlem sonrasında yeniden işlem yapılıp yapılmayacağı sorulur.
*/

#include <iostream>
using namespace std;

int main()
{
    int sayi1, sayi2;
    char islem, devam = 'e';
    while (devam == 'e' || devam == 'E')
    {

        cout << "Birinci sayi: ";
        cin >> sayi1;

        cout << "islem: ";
        cin >> islem;

        cout << "Ikinci sayi: ";
        cin >> sayi2;

        switch (islem)
        {
        case '+':
            cout << "Sonuc: " << sayi1 + sayi2 << endl;
            break;

        case '-':
            cout << "Sonuc: " << sayi1 - sayi2 << endl;
            break;

        case '*':
            cout << "Sonuc: " << sayi1 * sayi2 << endl;
            break;

        case '/':
            cout << "Sonuc: " << sayi1 / sayi2 << endl;
            break;

        default:
            cout << "hatalı islem" << endl;
            break;
        }

        cout << "Devam etmek istiyor musunuz?\nEvet = E/e\tHayir = H/h" << endl;
        cin >> devam;
    }

    return 0;
}