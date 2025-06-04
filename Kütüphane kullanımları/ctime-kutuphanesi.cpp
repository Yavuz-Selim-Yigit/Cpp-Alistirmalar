#include <iostream>
#include <ctime>
using namespace std;

int main()
{
#pragma region "time_t"

    // time_t, zaman bilgisini temsil eden bir veri tipidir.
    // Unix epoch (1 Ocak 1970) ile belirtilen saniye sayısını tutar.
    time_t zaman = time(0); // Şu anki zamanı alır
    cout << "Su anki zaman: " << zaman << endl;

#pragma endregion

#pragma region "time(time_t* arg)"

    // time() fonksiyonu, şu anki zamanı time_t tipinde döndürür.
    // Eğer arg parametresi NULL değilse, zaman bilgisini arg'ye de atar.
    time_t suAn = time(NULL);
    cout << "Su anki zaman (time(NULL)): " << suAn << endl;

#pragma endregion

#pragma region "struct tm"

    // struct tm, zaman bilgisini daha ayrıntılı olarak tutar.
    // Yıl, ay, gün, saat, dakika ve saniye gibi bileşenleri içerir.
    struct tm *zamanBilgisi = localtime(&suAn);                // Yerel zamana dönüştürür
    cout << "Yil: " << (1900 + zamanBilgisi->tm_year) << endl; // Yıl 1900'den başlar
    cout << "Ay: " << (1 + zamanBilgisi->tm_mon) << endl;      // Ay 0'dan başlar
    cout << "Gun: " << zamanBilgisi->tm_mday << endl;
    cout << "Saat: " << zamanBilgisi->tm_hour << endl;
    cout << "Dakika: " << zamanBilgisi->tm_min << endl;
    cout << "Saniye: " << zamanBilgisi->tm_sec << endl;

#pragma endregion

#pragma region "tm_sec, tm_min, tm_hour"

    // struct tm içindeki bileşenler:
    // tm_sec: Saniye (0-59)
    // tm_min: Dakika (0-59)
    // tm_hour: Saat (0-23)
    cout << "Saniye: " << zamanBilgisi->tm_sec << endl;
    cout << "Dakika: " << zamanBilgisi->tm_min << endl;
    cout << "Saat: " << zamanBilgisi->tm_hour << endl;

#pragma endregion

#pragma region "tm_min, tm_hour, tm_mday"

    // struct tm içindeki diğer bileşenler:
    // tm_mday: Ayın günü (1-31)
    // tm_mon: Ay (0-11, Ocak 0'dır)
    // tm_year: Yıl (1900'den itibaren)
    cout << "Ayın Günü: " << zamanBilgisi->tm_mday << endl;
    cout << "Ay: " << (1 + zamanBilgisi->tm_mon) << endl;      // Ay 0'dan başlar
    cout << "Yıl: " << (1900 + zamanBilgisi->tm_year) << endl; // Yıl 1900'den başlar

#pragma endregion

#pragma region "tm_wday, tm_yday"

    // struct tm içindeki diğer bileşenler:
    // tm_wday: Haftanın günü (0-6, Pazar 0'dır)
    // tm_yday: Yılın günü (0-365)
    cout << "Haftanın Günü: " << zamanBilgisi->tm_wday << endl; // Pazar 0'dır
    cout << "Yılın Günü: " << zamanBilgisi->tm_yday << endl;    // 1 Ocak 0'dır

#pragma endregion

#pragma region "tm_isdst"

    // struct tm içindeki diğer bileşen:
    // tm_isdst: Yaz saati uygulaması (0: Uygulanmıyor, 1: Uygulanıyor, -1: Bilinmiyor)
    cout << "Yaz Saati Uygulaması: " << zamanBilgisi->tm_isdst << endl;

#pragma endregion

#pragma region "localtime(const time_t* arg)"

    // localtime() fonksiyonu, time_t tipindeki zamanı yerel zamana dönüştürür.
    // Bu fonksiyon, zaman bilgisini struct tm tipinde döndürür.
    struct tm *yerelZaman = localtime(&suAn);
    cout << "Yerel Zaman: " << asctime(yerelZaman); // asctime() ile okunabilir formata çevirir

#pragma endregion

#pragma region "gmtime(const time_t* arg)"

    // gmtime() fonksiyonu, time_t tipindeki zamanı UTC (Koordinatlı Evrensel Zaman) olarak döndürür.
    // Bu fonksiyon da zaman bilgisini struct tm tipinde döndürür.
    struct tm *utcZaman = gmtime(&suAn);
    cout << "UTC Zaman: " << asctime(utcZaman); // asctime() ile okunabilir formata çevirir

#pragma endregion

#pragma region "strftime"
    /*
    %Y: Yıl (4 haneli)
    %m: Ay (01-12)
    %d: Gün (01-31)
    %H: Saat (00-23)
    %M: Dakika (00-59)
    %S: Saniye (00-59)
    %c: Yerel tarih ve saat
    %A: Haftanın tam adı
    %a: Haftanın kısaltılmış adı
    %B: Ayın tam adı
    %b: Ayın kısaltılmış adı
    %p: AM/PM
    strftime() fonksiyonu, struct tm tipindeki zamanı belirli bir formatta string olarak döndürür.
    */

#pragma endregion

#pragma region ""

#pragma endregion

#pragma region ""

#pragma endregion

#pragma region ""

#pragma endregion
    return 0;
}