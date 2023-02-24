
#include <iostream>

int factorial(int num) {
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;
}
int fibonacci(int num) {
	if (num <= 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);

}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Факториал с помощью рекурсии
	/*std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << "\n\n";*/


	// Задача 1. Числа Фибоначи
	/*std::cout << "Задача 1.\nВведите номер числа Фибоначчи\n";
	std::cin >> n;
	std::cout << "Число Фибонначи №" << n << ": " << fibonacci(n) << std::endl;
	for (int i = 0; i < 13; i++)
		std::cout << fibonacci(i) << ' ';
		std::cout << "\n\n";*/


	

	return 0;

}