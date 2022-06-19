#include <iostream>

int main(){
	int i = 1; // необходимое нам число	
	mark:; // маркер для перехода из цикла
	for (int k = 1; k <= 20; k += 1){ // перебираем все числа
		if (i % k != 0){ // условия выхода из цикла
			i += 1;
			goto mark; // переход в точку маркера
		}
	}
	std::cout << i << std::endl;
	return 0;
}