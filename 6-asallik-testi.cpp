/*
Kullanıcıdan bir sayı istenilecek ve istenilen sayının asallığı sorgulanacak.
Kullanıcı isterse birden fazla sorgulama yapabilecektir.
*/

#include <iostream>
using namespace std;

int main()
{
    int sayi, sayac = 1;
    char secim = 'E';

    while (secim == 'E')
    {
        cout << "Sayi: ";
        cin >> sayi;

        if (sayi > 2)
        {
            while (sayac < sayi - 1)
            {
                sayac++;
                if (sayi % sayac == 0)
                {
                    cout << "Asal degil" << endl;
                    break;
                }
                else if (sayac + 1 == sayi)
                {
                    cout << "Asal" << endl;
                    break;
                }
            }
        }

        else if (sayi == 2) // 2 özel durumu
        {
            cout << "Asal" << endl;
        }

        else if (sayi == 1) // 1 özel durumu
        {
            cout << "Asal Degil" << endl;
        }

        else // sıfır ve negatif kısım
        {
            cout << "Pozitif sayilarda asallik aranir" << endl;
        }

        cout << "Devam edilsin mi?" << endl
             << "Evet = E\tHayir = H" << endl;
        cin >> secim;

        sayac = 1;
    }
    return 0;
}