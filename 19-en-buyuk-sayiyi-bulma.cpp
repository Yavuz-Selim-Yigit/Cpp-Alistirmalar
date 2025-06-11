/*
Kullanıcının girdiği n tane doğal sayıdan en büyük olanı bulan bir program
yazılacaktır. Kullanıcının kaç tane sayı gireceği alınacak sonra o
sayılardan en büyük olanı ekrana yazdırılacak.
*/

#include <iostream>
using namespace std;

int en_buyuk(int n);

int main()
{
    int n;
    cout << "Kac sayi girilecek: ";
    cin >> n;

    cout << "En buyuk sayi: " << en_buyuk(n) << endl;

    return 0;
}

int en_buyuk(int n)
{
    int sayi;
    int buyuk_sayi = 1;

    for (int i = 1; i <= n; i++)
    {
        cout << "Bir sayi giriniz: ";
        cin >> sayi;

        cout << i << ". sayi: " << sayi << endl;

        if (sayi > buyuk_sayi)
            buyuk_sayi == sayi;
    }

    return buyuk_sayi;
}