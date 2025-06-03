/*
Bir yolda seyir halinde olan arabalar, kamyonetler ve otobüsler vardır.
Bir program yardımı ile araçların hız limitlereine uyup uymadığı kontrol
edilecektir.
araba: 82
otobüs: 70
kamyonet: 50

Kullanıcıdan araç türünü ve hızını alınız.
Araç kurallara uyup uymadığını kontrol ediniz.
*/
#include <iostream>
using namespace std;

int main()
{
    int arabaHizi = 82, otobusHizi = 70, kamyonetHizi = 50;
    int hiz;
    char tur;

    cout << "Araba = A / a" << endl
         << "Otobus = O / o" << endl
         << "Kamyonet = K / k" << endl;

    cout << "Lutfen aracinizin turunu giriniz: ";
    cin >> tur;

    cout << "Lutfen aracinizin hizini giriniz: ";
    cin >> hiz;

    switch (tur)
    {
    case 'A':
        if (hiz > arabaHizi)
            printf("Hiz sinirini asmis");
        break;
    case 'a':
        if (hiz > arabaHizi)
            printf("Hiz sinirini asmis");
        break;
    case 'O':
        if (hiz > otobusHizi)
            printf("Hiz sinirini asmis");
        break;
    case 'o':
        if (hiz > otobusHizi)
            printf("Hiz sinirini asmis");
        break;
    case 'K':
        if (hiz > kamyonetHizi)
            printf("Hiz sinirini asmis");
        break;
    case 'k':
        if (hiz > kamyonetHizi)
            printf("Hiz sinirini asmis");
        break;
    default:
        printf("Belirtilen turlerden irini seciniz");
        break;
    }

    return 0;
}