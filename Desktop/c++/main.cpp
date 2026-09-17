// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	//1Böyük olanı tap: İki ədəd (a və b) daxil et. Hansı böyükdürsə, onu ekrana yazdır.
	//{
	//	int a, b;
	//	cout << "a daxil et";
	//	cin >> a;
	//		cout << "b daxil et";
	//	cin >> b;
	//	if (a < b)
	//	cout << b << "boyukdur";
	//	else
	//		cout << a<< "boyukdur";
	//}


	//2Müsbət/Mənfi: Daxil edilən ədədin müsbət, mənfi və ya sıfır olduğunu yoxla.
	//int a, b;
	//	cout << "a daxil et";
	//	cin >> a;
	//	if (a < 0)
	//		cout << "eded menfidir";
	//	if (a > 0)
	//		cout << "eded musbetdir";
	//	else
	//		cout << "eded sifirdi";
	//	}




	//Tək yoxsa Cüt : Ədədin tək və ya cüt olduğunu tap(% 2 == 0 məntiqi ilə).
	/*int a;
	cout << "a daxil et";
	cin >> a;
	if (a % 2 == 0)
		cout << "eded cuttdur";
	else
		cout << "eded tekdir";*/
// }

//Üç ədədin ən böyüyü : a, b və c ədədləri arasında ən böyüyünü tap.


    int a, b, c;

    cout << "a ededi daxil et: ";
    cin >> a;

    cout << "b ededi daxil et: ";
    cin >> b;

    cout << "c ededi daxil et: ";
    cin >> c;

    if (a > b && a > c) {
        cout << "a boyukdur";
    }
    else if (b > a && b > c) {
        cout << "b boyukdur";
    }
    else {
        cout << "c boyukdur";
    }

    return 0;
}


//Qrupların cəmi : a, b, c və z ədədlərini daxil et.Əgər(a + b) cəmi(c + z) cəmindən böyükdürsə, "Birinci qrup qalibdir" yazdır.
//
//2. Səviyyə : Switch - Case Tapşırıqları
//Həftənin günləri : 1 - 7 arası rəqəm daxil edilsin. 1 - Bazar ertəsi, 2 - Çərşənbə axşamı... və s.yazdıran proqram.
//
//İlin ayları : 1 - 12 arası rəqəmə görə ayın adını yazdır(Məsələn : 3 daxil edilsə "Mart").
//
//Sadə Kalkulyator : İki ədəd və bir simvol(+, -, *, / ) daxil et.Simvola görə əməliyyatı yerinə yetir.
//
//Fəsil təyini : Ayın nömrəsinə görə hansı fəsildə olduğumuzu tap(Məsələn : 12, 1, 2 ayları - "Qış").
//
//Qiymət hərfi : Tələbənin topladığı bala görə(A, B, C, D, F) rəy yazdır(Məsələn : 'A' - "Əla", 'F' - "Kəsildiniz").
//
//3. Səviyyə : Mantıksal Operatorlar(&&, || )
//Sürücülük vəsiqəsi : İstifadəçinin yaşı 18 - dən böyükdürsə VƏ sağlamlıq arayışı(1 və ya 0) varsa, "Vəsiqə ala bilər" yazdır.
//
//İmtahan keçidi : Tələbənin imtahan balı 51 - dən çoxdursa VƏ davamiyyəti 75 % -dən yuxarıdırsa, "Keçdi" yazdır.
//
//Aralıq yoxlama : Daxil edilən ədədin 10 ilə 100 arasında olub - olmadığını yoxla.
//
//Login Sistemi : İstifadəçi adı "admin" VƏ şifrə "12345" olduqda "Giriş uğurludur" yazdır.
//
//Üçbucaq qaydası : Üç tərəf daxil et(a, b, c).Bu tərəflərdən üçbucaq düzəltmək olarmı ? (Hər tərəf digər ikisinin cəmindən kiçik olmalıdır).
//
//4. Səviyyə : Bir az daha mürəkkəb
//Bölmə yoxlaması : Ədəd həm 3 - ə, həm də 5 - ə tam bölünürsə "Tam bölünür" yazdır.
//
//Sıfıra bölünmə xətası : İki ədədi bölən proqram yaz.Əgər ikinci ədəd 0 - dırsa, "Xəta: Sıfıra bölmək olmaz!" mesajı ver.
//
//Temperatur halı : Suyun temperaturunu al. 0 - dan aşağısa "Buz", 0 - 100 arası "Maye", 100 - dən çoxsa "Buxar" yazdır.
//
//Vat hesablanması : Daxil edilən qiymətə 18 % ƏDV əlavə et, amma əgər qiymət 1000 - dən çoxdursa, əlavə 5 % endirim et.
//
//Artıq il : Daxil edilən ilin "artıq il" (leap year) olub olmadığını hesablayan şərt yaz.
