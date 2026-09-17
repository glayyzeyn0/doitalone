#include <iostream>
using namespace std;

int main() 
	// 1Böyük olani tap: İki ədəd (a və b) daxil et. Hansı böyükdürsə, onu ekrana yazdır.
	{
		int a, b;
		cout << "a daxil et";
		cin >> a;
			cout << "b daxil et";
		cin >> b;
		if (a < b){
		cout << b << "boyukdur";
        }
		else {
			cout << a<< "boyukdur";
	}
}