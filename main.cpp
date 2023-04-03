#include <iostream>
#include "printDynArr.h"
#include "arrAppend.h"
#include "arrDelete.h"

using namespace std;

int main(int argc, char** argv){int aSize(0), lSize(0);
	do {
		cout << "Введите фактический размер массива: ";
		cin >> aSize;
		cout << "Введите логический размер массива: ";
		cin >> lSize;
		if (lSize > aSize) {
			cout << "Ошибка! Логический размер массива не может превышать фактический!" << endl;
		}
	} while (lSize > aSize);

	int* arr = new int[aSize]();

	for (int i = 0; i < lSize; i++) {
		cout << "Введите arr[" << i << "]: ";
		cin >> arr[i];
	}

	print_dynamic_array(arr, lSize, aSize);

	string input = "no";
	do {
		cout << "Удалить первый элемент?";
		cin >> input;

		if (input == "yes") {
			arr = remove_dynamic_array_head(arr, lSize, aSize);
			print_dynamic_array(arr, lSize, aSize);
		}
		else if(input != "no") {
			cout << "Не знаю такой команды" << endl;
		}
	} while (input != "no");

	cout << "Спасибо! ";
	print_dynamic_array(arr, lSize, aSize);

	delete[] arr;
	arr = nullptr;

	return 0;
}