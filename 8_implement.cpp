// здесь сама функция
#include <fstream>
#include <cstring>
/*
Функция принимает название файла
Удаляет все знаки \n которые мешают при использовании 
seekg()
*/
using namespace std;

void new_f(char name[]){
	char char_num; // переменная для хранения char 
	ifstream old_file;
	ofstream new_file;
	rename(name, "old.txt"); // переименовываем исходный файл, теперь он промежуточный
	old_file.open("old.txt"); // открываем только для чтения
	new_file.open(name); // создаем новый форматированный файлы
	while (!old_file.eof()){ // читаем до конца файла
		old_file.get(char_num);
		if (char_num != '\n'){ // пропускаем не печатные знаки
			new_file << char_num;
		}
	}
	old_file.close();
	remove("old.txt"); // удаляем промежуточный файл
	new_file.close();
}