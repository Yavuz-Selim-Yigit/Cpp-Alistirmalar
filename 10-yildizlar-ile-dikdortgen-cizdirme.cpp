/*
Kullanıcıdan en x boy  adedince yıldız kullanarak
bir dikdörtgen çizen programı yazınız.
* * * * *
* * * * *
* * * * *
4x3
*/

#include <iostream>
using namespace std;
int main()
{
    int en, boy;

    cout << "Dikdortgenin enini giriniz: ";
    cin >> en;
    cout << "Dikdortgenin boyunu giriniz: ";
    cin >> boy;

    for (int i = 1; i <= boy; i++)
    {
        for (int i = 1; i <= en; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}