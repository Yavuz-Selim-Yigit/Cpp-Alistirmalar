/*
B serisi sayıları 0 ve 1'den başlayarak bir sonraki sayı kendinden önceki
iki B serisi çift sayının toplamına eşit olan sayılardır.
Tek ve eksi sayıların değeri -1'dir.
*/

#include <iostream>
using namespace std;

int b_serisi(int n);

int main()
{
    int n;
    cout << "Bir sayi giriniz: ";
    cin >> n;
    cout << "Girilen sayinin b_serisi: " << b_serisi(n);
    return 0;
}

int b_serisi(int n)
{

    if (n < 0 || (n % 2) != 0) // eksi veya tek
        return -1;
    if (n == 0) // 0
        return 0;
    if (n == 2) // 2
        return 1;

    return b_serisi(n - 2) + b_serisi(n - 4);
}