#include <iostream>

int main(){
	long int sum_sq = 0;
	long int sq_sum = 0;
	for (int i = 1; i <= 100; i += 1){
		sum_sq += i*i; // считаем сумму квадратов
		sq_sum += i; // считаем сумму чисел
	}
	sq_sum = sq_sum * sq_sum; // возводим сумму в квадрат

	std::cout << "Sum of squares = " << sum_sq << std::endl;
	std::cout << "Square of sums = " << sq_sum << std::endl;
	// выводим разницу
	std::cout << "Difference = " << sq_sum - sum_sq << std::endl;

	return 0;
}