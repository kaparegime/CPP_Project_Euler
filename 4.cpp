#include <iostream>

bool is_polindrome(int i); // создаем прототип функции

using namespace std;
int main(){
	int num = 0; // искомое число которое будем искать
	// необходимо пройти по двум вариантам
	// 1 - 2 одинаковых числа
	// 2 - 2 разных числа
	// полученое произведение сохраняем в промеж переменную 
	// сравниваем искомое число с промежуточным, оставляем большее
	for (int i = 100; i < 1000; ++i){
		int mid_num = i * i;
		if (is_polindrome(mid_num)){
			if (mid_num > num){ // сравниваем промежуточное значение с целевой переменной, оставляем большее
				num = mid_num;
			}
		}
		for (int k = 999; k > 99; --k){
			mid_num = i * k;
			if (is_polindrome(mid_num)){
				if (mid_num > num){
					num = mid_num;
				}
			}	
		}
	}

	cout << "Number: " << num << endl;
	return 0;
}

// описываем функцию
bool is_polindrome(int i){
	int k = i; // копируем т.к. в ходе циклы будем менять исходное число
	int reverse_i = 0; // переменная для развернутого числа
	while (i){ // фактически булево условие, т.к. при достежении i=0 или отрицательного
		// будет return false -> цикл закончится
		// используя мат источники подбираем удобную формулу
		reverse_i = 10 * reverse_i + i % 10;
		i /= 10;
	}
	if (k == reverse_i){
		return 1;
	}
	else{
		return 0;
	}
}