/*
Kullanıcıdan bir sayi al ve 1'den o sayısa kadar saydırarak tüm sayıları yazdır.
while kullan
*/

#include <iostream>
using namespace std;

int main()
{
    int sayi, i = 1;
    cout << "Sayi: ";
    cin >> sayi;

    while (sayi >= i)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}