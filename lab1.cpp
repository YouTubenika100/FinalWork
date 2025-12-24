#include <iostream>
using namespace std;

int main() {
    int a1; // Первое число
	int b; // Второе число
	int sum; // Сумма

    a1 = 10;
	// Проверка на положительность
	if (a1 > 0) {
		cout << "Переменная a1 положительна" << endl;
	}
	
    b = 5;

    sum = a1 + b;

    cout << "Sum = " << sum << endl;

    return 0;
}