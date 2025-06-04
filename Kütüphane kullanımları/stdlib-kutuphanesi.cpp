#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
#pragma region "malloc(boyut)"

    /*
    malloc(boyut) : Dinamik bellek ayırma işlemi yapar.
    malloc() fonksiyonu, C dilinde dinamik bellek ayırmak için kullanılır.
    malloc() fonksiyonu, belirtilen boyutta bir bellek bloğu ayırır ve bu bloğun başlangıç adresini döndürür.
    malloc() fonksiyonu, ayırdığı bellek bloğunu serbest bırakmak için free() fonksiyonunu kullanmanız gerekir.
    */
    int *ptr = (int *)malloc(10 * sizeof(int)); // 10 adet int için bellek ayırma
    if (ptr == NULL)
    {
        cout << "Bellek ayırılamadı!" << endl;
        return 1; // Hata durumu
    }

    // Bellek kullanımını gösterme
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i + 1; // Değer atama
        cout << ptr[i] << " ";
    }

    free(ptr); // Belleği serbest bırakma

#pragma endregion

#pragma region "calloc(eleman_sayisi, eleman_boyutu)"

    /*
    calloc(eleman_sayisi, eleman_boyutu) : Dinamik bellek ayırma işlemi yapar.
    calloc() fonksiyonu, C dilinde dinamik bellek ayırmak için kullanılır.
    calloc() fonksiyonu, belirtilen sayıda eleman ve her bir elemanın boyutunu alarak, toplam boyutta bir bellek bloğu ayırır.
    calloc() fonksiyonu, ayırdığı bellek bloğunu serbest bırakmak için free() fonksiyonunu kullanmanız gerekir.
    */
    int *arr = (int *)calloc(5, sizeof(int)); // 5 adet int için bellek ayırma
    if (arr == NULL)
    {
        cout << "Bellek ayırılamadı!" << endl;
        return 1; // Hata durumu
    }

    // Bellek kullanımını gösterme
    for (int i = 0; i < 5; i++)
    {
        arr[i] = (i + 1) * 10; // Değer atama
        cout << arr[i] << " ";
    }

    free(arr); // Belleği serbest bırakma
#pragma endregion

#pragma region "free(pointer)"
    /*
    free(pointer) : Dinamik olarak ayrılmış bellek bloğunu serbest bırakır.
    free() fonksiyonu, C dilinde dinamik olarak ayrılmış bellek bloğunu serbest bırakmak için kullanılır.
    free() fonksiyonu, belirtilen bellek bloğunu serbest bırakarak, belleği geri kazandırır.
    */
    int *dynamicArray = (int *)malloc(5 * sizeof(int)); // 5 adet int için bellek ayırma
    if (dynamicArray == NULL)
    {
        cout << "Bellek ayırılamadı!" << endl;
        return 1; // Hata durumu
    }

    // Bellek kullanımını gösterme
    for (int i = 0; i < 5; i++)
    {
        dynamicArray[i] = i + 1; // Değer atama
        cout << dynamicArray[i] << " ";
    }

    free(dynamicArray); // Belleği serbest bırakma

#pragma endregion

#pragma region "atoi(metin)"

    /*
    atoi(metin) : Metin olarak verilen sayısal değeri tamsayıya dönüştürür.
    atoi() fonksiyonu, C dilinde metin olarak verilen sayısal değeri tamsayıya dönüştürmek için kullanılır.
    atoi() fonksiyonu, metin içinde bulunan sayısal değeri tamsayı olarak döndürür.
    */
    const char *numberString = "12345"; // Metin olarak sayısal değer
    int number = atoi(numberString);    // Metni tamsayıya dönüştürme
    cout << "Donusturulen sayi: " << number << endl;

#pragma endregion

#pragma region "atol(metin)"

    /*
    atol(metin) : Metin olarak verilen sayısal değeri uzun tamsayıya dönüştürür.
    atol() fonksiyonu, C dilinde metin olarak verilen sayısal değeri uzun tamsayıya dönüştürmek için kullanılır.
    atol() fonksiyonu, metin içinde bulunan sayısal değeri uzun tamsayı olarak döndürür.
    */
    const char *longNumberString = "1234567890";  // Metin olarak uzun sayısal değer
    long int longNumber = atol(longNumberString); // Metni uzun tamsayıya dönüştürme
    cout << "Donusturulen uzun sayi: " << longNumber << endl;

#pragma endregion

#pragma region "atoll(metin)"

    /*
    atoll(metin) : Metin olarak verilen sayısal değeri uzun uzun tamsayıya dönüştürür.
    atoll() fonksiyonu, C dilinde metin olarak verilen sayısal değeri uzun uzun tamsayıya dönüştürmek için kullanılır.
    atoll() fonksiyonu, metin içinde bulunan sayısal değeri uzun uzun tamsayı olarak döndürür.
    */
    const char *longLongNumberString = "1234567890123456789";   // Metin olarak uzun uzun sayısal değer
    long long int longLongNumber = atoll(longLongNumberString); // Metni uzun uzun tamsayıya dönüştürme
    cout << "Donusturulen uzun uzun sayi: " << longLongNumber << endl;

#pragma endregion

#pragma region "atof(metin)"

    /*
    atof(metin) : Metin olarak verilen sayısal değeri ondalıklı sayıya dönüştürür.
    atof() fonksiyonu, C dilinde metin olarak verilen sayısal değeri ondalıklı sayıya dönüştürmek için kullanılır.
    atof() fonksiyonu, metin içinde bulunan sayısal değeri ondalıklı sayı olarak döndürür.
    */
    const char *floatNumberString = "123.45";     // Metin olarak ondalıklı sayısal değer
    double floatNumber = atof(floatNumberString); // Metni ondalıklı sayıya dönüştürme
    cout << "Donusturulen ondalikli sayi: " << floatNumber << endl;

#pragma endregion

#pragma region "rand()"

    /*
    rand() : Rastgele sayı üretir.
    rand() fonksiyonu, C dilinde rastgele sayı üretmek için kullanılır.
    rand() fonksiyonu, 0 ile RAND_MAX arasında bir rastgele tamsayı döndürür.
    */
    cout << "Rastgele sayi: " << rand() << endl; // Rastgele sayı üretme

#pragma endregion

#pragma region "exit(durum_kodu)"

    /*
    exit(durum_kodu) : Programı belirtilen durum kodu ile sonlandırır.
    exit() fonksiyonu, C dilinde programı belirtilen durum kodu ile sonlandırmak için kullanılır.
    exit() fonksiyonu, programın normal bir şekilde sonlanmasını sağlar.
    */
    cout << "Program sonlandiriliyor..." << endl;
    exit(0); // Durum kodu 0 ile programı sonlandırma

#pragma endregion

#pragma region "abort()"

    /*
    abort() : Programı aniden sonlandırır.
    abort() fonksiyonu, C dilinde programı aniden sonlandırmak için kullanılır.
    abort() fonksiyonu, programın normal bir şekilde sonlanmasını sağlamaz ve genellikle hata durumlarında kullanılır.
    */
    cout << "Program aniden sonlandırılıyor..." << endl;
    abort(); // Programı aniden sonlandırma

#pragma endregion

    return 0;
}