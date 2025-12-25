#include <iostream>
using namespace std;

int main() {
    int numberOne; // Первое число
	int numberTwo; // Второе число
	int result; // Сумма
	
	
    numberOne = 10;
	// Проверка на положительность
	if (numberOne > 0) {
		cout << "Переменная numberOne положительна" << endl;
	}
	
    numberTwo = 5;

    result = numberOne + numberTwo;

    cout << "Sum = " << result << endl;

    return 0;
}