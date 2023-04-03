#include "printDynArr.h"

void print_dynamic_array(int* arr, int& logical_size, int& actual_size) {
	std::cout << "Динамический массив: ";
	for (int i = 0; i < logical_size; i++) {
		std::cout << arr[i] << ' ';
	}

	for (int i = logical_size; i < actual_size; i++) {
		std::cout << "_ ";
	}
	std::cout << std::endl;
}