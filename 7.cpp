#include <iostream>
#include <cmath>

using namespace std;
bool is_prime(unsigned long int l); // создаем прототип функции

int main(){
	long int num = 2;
	short int step = 0; // переменная счетчик
	while (step < 10001 - 1){
		if (is_prime(num)){
			step += 1; // счетчик меняет значение только на простые числа
			num += 1;
		}
		// проверяем все числа
		while (is_prime(num) == 0) {
			num += 1;
		}
	}
	cout << "10001st prime is: " << num << endl;
	return 0;
}

// пишем функцию, используем нааботки задачи №3
bool is_prime(unsigned long int l){
	for (unsigned long int j = 2; j <= sqrt(l); j++){
		if (l % j == 0){
			return false;
		}
	}
	return true;
}