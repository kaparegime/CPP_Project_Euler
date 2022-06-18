#include <iostream>
#include <cmath>
unsigned long int i = 600851475143; // размещаем искомое число 600851475143
bool is_prime(unsigned long int l); // создаем прототип функции для определения простоты числа

int main(){
	using namespace std;
	// цикл работает пока is_prime выдает false
	while (!is_prime(i)){
		for (int num = 2; num < i; num++){
			// проверяем соотв числа условию 
			if (is_prime(num) && i % num == 0){
				// т.к. любое натуральное число можно разложить на простые множители
				// на каждом шаге делим искомое число на найденный делитель
				// последний делитель будет наибольшим, т.к. ищем с меньших
				i = i / num;
				num = 2; // обновляем num, т.к. ищем делитель в промежутки от 2 до нового i
			}
		}
	}
	cout << "Largest prime factor is: " << i << endl;
	return 0;
}
// функция для определения простоты числа
// будем возвращать булевое значение
bool is_prime(unsigned long int l){
	// используя Вики находим удобный тест простоты
	for (unsigned long int j = 2; j <= sqrt(l); j++){
		// если число делится хоть на 1 число без остатка 
		// значит число составное
		if (l % j == 0){
			return false;
		}
	}
	return true;
}