#include <iostream>
#include <fstream> // испольлзуем для чтения из файла
#include "8.h" // для тренеровки, используем внешнии функции

using namespace std;
int main(){
	char name[] = "8.txt";
	new_f(name); // используем функцию
	long long int product = 1;
	short mas_len = 13;
	unsigned int pos = 0; // маркер для следования по файлу
	ifstream file; // читаем получившийся файл
	file.open(name);
	while (pos != 1001 - mas_len){ // ограничим чтение до последней 13 числовой комбинации
		file.seekg(pos); // каждый шаг перемещаем начало чтение файла на 1
		char num;
		long long int mid_prod = 1; // пром произведения, для сравнения с основным
		for (int i=0; i != mas_len; i++){ // с отметки чтения, читаем 13 значений
			file >> num;
			mid_prod *= num - '0'; // считаем их произведени
		}
		if (mid_prod > product){ // сравниваем с основным
			product = mid_prod;
		}
		pos += 1;
	}
	cout << product << endl;

	return 0;
}