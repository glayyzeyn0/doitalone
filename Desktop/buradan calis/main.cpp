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

//     int a, b, c;

//     cout << "a ededi daxil et: ";
//     cin >> a;

//     cout << "b ededi daxil et: ";
//     cin >> b;

//     cout << "c ededi daxil et: ";
//     cin >> c;

//     if (a > b && a > c) {
//         cout << "a boyukdur";
//     }
//     else if (b > a && b > c) {
//         cout << "b boyukdur";
//     }
//     else {
//         cout << "c boyukdur";
//     }

//     return 0;
// }


//Qrupların cəmi : a, b, c və z ədədlərini daxil et.Əgər(a + b) cəmi(c + z) cəmindən böyükdürsə, "Birinci qrup qalibdir" yazdır.
//  int a, b, c,z;

//     cout << "a ededi daxil et: ";
//     cin >> a;
//     cout << "b ededi daxil et: ";
//     cin >> b;
//     cout << "c ededi daxil et: ";
//     cin >> c;
//     cout << "z ededi daxil et: ";
//     cin >> z;
// if((a+b)>(c+z)){
//     cout<<"birinci qrup qalibdir";
// }
// else{
//     cout<<"ikinci qrup qalibdir";
// }
// }


//
//2. Səviyyə : Switch - Case Tapşırıqları
//Həftənin günləri : 1 - 7 arası rəqəm daxil edilsin. 1 - Bazar ertəsi, 2 - Çərşənbə axşamı... və s.yazdıran proqram.
// int gun;
// cout<<"gun daxil et";
// cin>>gun;
// switch(gun){
// case 1:
//     cout<<"bazar ertesi";
//     break;
// case 2:
//     cout<<"cersenbe axsami";
//     break;
// case 3:
//     cout<<"cersenbe";
//     break;
// case 4:
//     cout<<"cume axsami";
//     break;
// case 5:
//     cout<<"cume";
//     break;
// case 6:
//     cout<<"senbe";
//     break;
// case 7:
//     cout<<"bazar";
//     break;
// default:
//     cout<<"duzgun gun daxil et";
// }
    // }
//
//İlin ayları : 1 - 12 arası rəqəmə görə ayın adını yazdır(Məsələn : 3 daxil edilsə "Mart").
// int ay;
// cout<<"ay daxil et";
// cin>>ay;
// switch(ay){
// case 1:
//     cout<<"yanvar";
//     break;
// case 2:
//     cout<<"fevral";
//     break;
// case 3:
//     cout<<"mart";
//     break;
// case 4:
//     cout<<"aprel";
//     break;
// case 5:
//     cout<<"may";
//     break;
// case 6:
//     cout<<"iyun";
//     break;
// case 7:
//     cout<<"iyul";
//     break;
// case 8:
//     cout<<"avqust";
//     break;
// case 9:
//     cout<<"sentyabr";
//     break;
// case 10:
//     cout<<"oktyabr";
//     break;
// case 11:
//     cout<<"noyabr";
//     break;
// case 12:
//     cout<<"dekabr";
//     break;
// default:
//     cout<<"duzgun gun daxil et";
// }
//     }

//
//Sadə Kalkulyator : İki ədəd və bir simvol(+, -, *, / ) daxil et.Simvola görə əməliyyatı yerinə yetir.
// int a,b, emel;
// cout<<"a daxil et";
// cin>>a;
// cout<<"b daxil et";
// cin>>b;
// cout<<" ededleri toplamaq ucun 1, cixmaq ucun2, vurmaq ucun 3, bolmek ucun 4 secin ";
// cin>>emel;
// switch(emel){
//     case 1:
//     cout<<a+b;
//     break;
//     case 2:
//     cout<<a-b;
//     break;
//     case 3:
//     cout<<a*b;
//     break;
//     case 4:
//     cout<<a/b;
//     break;
//     default:
//     cout<<"emeli duzgun daxil et";
    
    
// }
    
// }

//
//Fəsil təyini : Ayın nömrəsinə görə hansı fəsildə olduğumuzu tap(Məsələn : 12, 1, 2 ayları - "Qış").
//
// int ay;
// cout<<"ay daxil et";
// cin>>ay;
// switch(ay){
// case 1:
//     cout<<"qis";
//     break;
// case 2:
//     cout<<"qis";
//     break;
// case 3:
//     cout<<"yaz";
//     break;
// case 4:
//     cout<<"yaz";
//     break;
// case 5:
//     cout<<"yaz";
//     break;
// case 6:
//     cout<<"yay";
//     break;
// case 7:
//     cout<<"yay";
//     break;
// case 8:
//     cout<<"yay";
//     break;
// case 9:
//     cout<<"payiz";
//     break;
// case 10:
//     cout<<"payiz";
//     break;
// case 11:
//     cout<<"payiz";
//     break;
// case 12:
//     cout<<"qis";
//     break;
// default:
//     cout<<"duzgun gun daxil et";
// }
//     }
//Qiymət hərfi : Tələbənin topladığı bala görə(A, B, C, D, F) rəy yazdır(Məsələn : 'A' - "Əla", 'F' - "Kəsildiniz").
// int bal;
// cout<<"bali daxil edin";
// cin>>bal;
// if(bal>90){
// 	cout<<"A-ela";
// }
// else if( bal>80){
// 	cout<<"B";
// }
// else if( bal>70){
// 	cout<<"C";
// }else if( bal>60){
// 	cout<<"D";
// }else if( bal>50){
// 	cout<<"E";
// }
// else{
// 	cout<<"kesildiniz";
// }
// }

//
//3. Səviyyə : Mantıksal Operatorlar(&&, || )
//Sürücülük vəsiqəsi : İstifadəçinin yaşı 18 - dən böyükdürsə VƏ sağlamlıq arayışı(1 və ya 0) varsa, "Vəsiqə ala bilər" yazdır.
//
// int yas;
// bool arayis;
// cout<<"yasi daxil edin";
// cin>>yas;
// cout<<"saglamliq kagizi varsa 1 yoxdursa 0 daxil et";
// cin>>arayis;
// if(yas>=18 && arayis==1){
//     cout<<"vesiqe ala biler";
// }
// else{
//     cout<<"vesiqe ala bilmez";
// }
// }
//İmtahan keçidi : Tələbənin imtahan balı 51 - dən çoxdursa VƏ davamiyyəti 75 % -dən yuxarıdırsa, "Keçdi" yazdır.
//
// int bal, qb;
// cout<<"telebenin balini  daxil et";
// cin>>bal;
// cout<<"davamiyyeti daxil et";
// cin>>qb;
// if (bal>=51 && qb>=((qb*75)/100)) {
//     cout<<"kecdi";
// }
// else{
//     cout<<"kesildi";
// }
// }
//Aralıq yoxlama : Daxil edilən ədədin 10 ilə 100 arasında olub - olmadığını yoxla.
// int a;
// cout<<"ededi daxil et";
// cin>>a;
// if(a>10 && a<100){
//     cout<<"eded hemin araliqdadir";

// }
// else{
//     cout<<"eded araliqda deyil";
// }
// }
//
//Login Sistemi : İstifadəçi adı "admin" VƏ şifrə "12345" olduqda "Giriş uğurludur" yazdır.
// string ad;
// int sifre;
// cout<<"istifadeci adini daxil edin ";
// cin>> ad;
// cout<<"sifreni daxil et ";
// cin>>sifre;
// if (ad=="admin" && sifre==12345){
// 	cout<<"giris ugurludur";
// }
// else{
// 	cout<<"istifadeci adini veya sifreni duzgun yaz tpoy";
// }




// }
//Üçbucaq qaydası : Üç tərəf daxil et(a, b, c).Bu tərəflərdən üçbucaq düzəltmək olarmı ? (Hər tərəf digər ikisinin cəmindən kiçik olmalıdır).
//
int a,b,c;
cout<<"sirayla ucbucagin tereflerini daxil edin";
cin>>a;
cin>>b;
cin>>c;
if (a+b>c && a+c>b && b+c>a){
	cout<<"bu tereflerle ucbucaq yaratmaq mumkundur";
}
else {
	cout<<"terefleri duzgun daxil edin";
}
}
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
// int il;
// int il2;
// cout<<"ili daxil edin";
// cin>>il;
// cout>>""
// if(il<)?????