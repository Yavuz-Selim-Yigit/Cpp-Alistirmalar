/*
A serisi sayıları 2 ve 3'den başlayarak bir sonraki sayı kendinden önceki
iki sayının çarpımına eşit olan sayılardır.
*/

#include <iostream>
using namespace std;

int a_serisi(int n);

int main()
{
    int n;
    cout << "Bir sayi giriniz: ";
    cin >> n;
    cout << "Girilen sayinin a_serisi: " << a_serisi(n);
    return 0;
}

int a_serisi(int n)
{
    if (n < 0)
        return -1;
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    if (n == 2)
        return 3;
    if (n > 2)
        return a_serisi(n - 1) * a_serisi(n - 2);
}