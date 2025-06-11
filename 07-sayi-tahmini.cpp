/*
Bilgisayar rastgele sayı (0, 100) üretecek ,
kullanıcı ise bu sayıyı doğru tahmin etmeye çalışacak.
Cevaplar yanlış ise kullanıcı doğru cevaba yönlendirin.
*/

#include <iostream>
#include <stdlib.h>
#include <ctime> // time() fonksiyonu için
using namespace std;

int main()
{
    int bilgisayar, kullanici;
    srand(time(NULL));
    bilgisayar = rand() % 100;

    cout << bilgisayar << endl;
    while (1)
    {
        cout << "Tahmin: ";
        cin >> kullanici;

        if (kullanici == bilgisayar)
        {
            cout << "Dogru tahmin";
            break;
        }
        else if (bilgisayar > kullanici)
        {
            cout << "Tuttugum sayidan kucuk" << endl
                 << "Tekrar Tahmin et" << endl;
        }
        else if (bilgisayar < kullanici)
        {
            cout << "Tuttugum sayidan buyuk" << endl
                 << "Tekrar Tahmin et" << endl;
        }
    }

    return 0;
}