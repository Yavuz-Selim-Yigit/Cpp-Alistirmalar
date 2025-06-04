/*
Kullanıcının seçimine göre daire, kare,üçgen ve dikdörtgenin
alanını hesaplayan programı yazınız.
float daire_alan(float r)
int kare_alan(int kenar)
int ucgen_alan(int taban, int yukseklik)
int dikdortgen_alan(int en, int boy)
fonksiyonları oluşturulup kullanılmalıdır.
*/

#include <iostream>
using namespace std;
float daire_alan(float r);
int dikdortgen_alan(int en, int boy);
int ucgen_alan(int taban, int yukseklik);
int kare_alan(int kenar);

int main()
{
    char sekilKisa;
    string sekil;
    int alan;
    int r, n, taban, yukseklik, en, boy;

    cout << "Hangi seklin alanini bulmak istiyorsunuz?" << endl;
    cout << "Daire = O/o\tKare = K/k\nUcgen = U/u\tDikdortgen = D/d" << endl;
    cin >> sekilKisa;

    switch (sekilKisa)
    {
    case 'O':
        cout << "Yaricap giriniz: ";
        cin >> r;
        alan = daire_alan(r);
        sekil = "Daire";
        break;
    case 'o':
        cout << "Yaricap giriniz: ";
        cin >> r;
        alan = daire_alan(r);
        sekil = "Daire";
        break;

    case 'K':
        cout << "Kenar uzunlugunu giriniz: ";
        cin >> n;
        alan = kare_alan(n);
        sekil = "Kare";
        break;

    case 'k':
        cout << "Kenar uzunlugunu giriniz: ";
        cin >> n;
        alan = kare_alan(n);
        sekil = "Kare";
        break;

    case 'U':
        cout << "Taban giriniz: ";
        cin >> taban;
        cout << "Yukseklik giriniz: ";
        cin >> yukseklik;
        alan = ucgen_alan(taban, yukseklik);
        sekil = "Ucgen";
        break;

    case 'u':
        cout << "Taban giriniz: ";
        cin >> taban;
        cout << "Yukseklik giriniz: ";
        cin >> yukseklik;
        alan = ucgen_alan(taban, yukseklik);
        sekil = "Ucgen";
        break;

    case 'D':
        cout << "En giriniz: ";
        cin >> en;
        cout << "Boy giriniz: ";
        cin >> boy;
        alan = dikdortgen_alan(en, boy);
        sekil = "Dikdortgen";
        break;

    case 'd':
        cout << "En giriniz: ";
        cin >> en;
        cout << "Boy giriniz: ";
        cin >> boy;
        alan = dikdortgen_alan(en, boy);
        sekil = "Dikdortgen";
        break;

    default:
        cout << "Belirtilen sekillerden birini seciniz!" << endl;
        break;
    }

    cout << sekil << " seklinin alani = " << alan;

    return 0;
}

float daire_alan(float r)
{
    return 3.14 * r * r;
}

int kare_alan(int kenar)
{
    return kenar * kenar;
}

int ucgen_alan(int taban, int yukseklik)
{

    return (taban * yukseklik) / 2;
}

int dikdortgen_alan(int en, int boy)
{
    return en * boy;
}