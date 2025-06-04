/*
Kullanıcının girdiği sayıya göre ikizdikkenar üçgen çizen programı yazınız.
      *
    * *
  * * *
* * * *
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

        for (int k = n; k > 0; k--) // Satır bas
        {
            cout << "  ";
        }
        n--;
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}