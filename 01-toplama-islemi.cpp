/*
Kullanıcıdan double tipinde iki sayı alınız ve bu iki sayıyı toplayınız.
Toplam sonucunu virgülden sonra iki basamak olacak şekilde ekrana yazdırınız.
*/
#include <iostream>
#include <iomanip> //sayının virgülden sonra kaç basamak gösterileceğini ayarlamak için
using namespace std;

int main()
{
    double sayi1, sayi2, toplam = 0.0;
    cout << "Lütfen birinci sayiyi giriniz: ";
    cin >> sayi1;
    cout << "Lütfen ikinci sayiyi giriniz: ";
    cin >> sayi2;
    toplam = sayi1 + sayi2;

    cout << fixed << setprecision(2); // virgülden sonra iki basamak göster
    cout << "Toplam: " << toplam << endl;
}