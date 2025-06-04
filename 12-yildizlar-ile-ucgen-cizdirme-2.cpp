/*
Kullanıcının girdiği sayıya göre ikizdikkenar üçgen çizen programı yazınız.
* * * *
  * * *
    * *
      *
n=4
*/

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Kenar uzunlugu: ";
    cin >> n;
    m = n;

    for (int i = 1; i <= m; i++)
    {
        for (int i = 1; i <= n; i++) // Satır bas
        {
            cout << "* ";
        }
        cout << endl;
        n--;
        for (int i = n; i < m; i++) // Satır bas
        {
            cout << "  ";
        }
    }

    return 0;
}