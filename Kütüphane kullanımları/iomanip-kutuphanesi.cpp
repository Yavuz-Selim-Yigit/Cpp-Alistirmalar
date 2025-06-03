#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
#pragma region "std::fixed"

    // Sayıların sabit noktalı (ondalık) gösterimini sağlar.
    double fixedSayi = 1234.56789;

    cout << "std::fixed: " << fixed << setprecision(2) << fixedSayi << endl; // Virgülden sonra 2 basamak göster

#pragma endregion

#pragma region "std::scientific"

    // Sayıların bilimsel gösterimini sağlar.
    double scientificSayi = 1234567.89;
    cout << "std::scientific: " << scientific << scientificSayi << endl;

#pragma endregion

#pragma region "std::setprecision(n)"

    // Sayının virgülden sonra n basamak gösterilmesini sağlar.
    double precisionSayi = 3.14159265358979323846;
    cout << "std::setprecision(n): " << setprecision(5) << precisionSayi << endl; // 5 basamak gösterir

#pragma endregion

#pragma region "std::setw(n)"

    // Çıktı alanının genişliğini ayarlar.
    int sayi = 42;
    cout << "std::setw(n): " << setw(10) << sayi << endl; // 10 karakter genişliğinde gösterir

#pragma endregion

#pragma region "std::setfill(char)"

    // Çıktı alanını doldurmak için kullanılan karakteri ayarlar.
    cout << "std::setfill(char): " << setfill('*') << setw(10) << sayi << endl; // 10 karakter genişliğinde, boşlukları * ile doldurur

#pragma endregion

#pragma region "std::dec , std::hex, std::oct"

    // Sayıları ondalık, onaltılık ve sekizlik sistemlerde gösterir.
    int decimalSayi = 255;
    cout << "std::dec: " << dec << decimalSayi << endl; // Ondalık gösterim
    cout << "std::hex: " << hex << decimalSayi << endl; // Onaltılık gösterim
    cout << "std::oct: " << oct << decimalSayi << endl; // Sekizlik gösterim

#pragma endregion

#pragma region "std::showbase"

    // Sayının tabanını gösterir (onaltılık için 0x, sekizlik için 0).
    cout << "std::showbase: " << showbase << hex << decimalSayi << endl; // Onaltılık gösterim ile tabanı gösterir
    cout << "std::showbase: " << oct << decimalSayi << endl;             // Sekizlik gösterim ile tabanı gösterir

#pragma endregion

#pragma region "std::showpoint"

    // Ondalık sayılarda noktanın gösterilmesini sağlar.
    double showpointSayi = 123.456;
    cout << "std::showpoint: " << showpoint << showpointSayi << endl; // Nokta gösterilir

#pragma endregion

#pragma region "std::uppercase"

    // Onaltılık gösterimde harflerin büyük olmasını sağlar.
    cout << "std::uppercase: " << uppercase << hex << decimalSayi << endl; // Onaltılık gösterim büyük harflerle

#pragma endregion

#pragma region "std::boolalpha"

    // Boolean değerlerin "true" veya "false" olarak gösterilmesini sağlar.
    bool boolDeger = true;
    cout << "std::boolalpha: " << boolalpha << boolDeger << endl; // true olarak gösterir

#pragma endregion

#pragma region "std::left, std::right, std::internal"

    // Çıktı hizalamasını ayarlar.
    cout << "std::left: " << left << setw(10) << "Sol" << endl;           // Soldan hizalama
    cout << "std::right: " << right << setw(10) << "Sag" << endl;         // Sağdan hizalama
    cout << "std::internal: " << internal << setw(10) << 1234.56 << endl; // İçten hizalama (sayılar için)

#pragma endregion

    return 0;
}