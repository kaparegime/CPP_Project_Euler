#include <iostream>

using namespace std;

int main(){
	// инициализируем 3 числа

 	for (int a = 1; a < 1000; a += 1){
 		for (int b = 2; b < 1000; b += 1){
 			for (int c = 3; c < 1000; c += 1){
 				if (a < b < c && (a*a + b*b == c*c) && a + b + c == 1000){
 					cout << "a = " << a;
 					cout << " , b = " << b;
 					cout << " , c = " << c << endl;
 					cout << a * b * c << endl;
 					goto mark;
 				}
 			}
 		}
 	}
 	mark:;
	return 0;
}