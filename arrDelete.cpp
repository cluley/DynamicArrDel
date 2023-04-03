#include "arrDelete.h"

int* remove_dynamic_array_head(int* arr, int& logical_size, int& actual_size) {
	if ((logical_size - 1) > (actual_size / 3)) {
		logical_size -= 1;
		int* temp_arr = new int[actual_size]();

		for (int i = 0; i < actual_size; i++) {
			temp_arr[i] = arr[i + 1];
		}

		delete[] arr;
		return temp_arr;
	}
	else if ((logical_size - 1) <= (actual_size / 3)) {
		logical_size -= 1;
		int* temp_arr = new int[actual_size]();

		for (int i = 0; i < (actual_size / 3); i++) {
			temp_arr[i] = arr[i + 1];
		}
		actual_size /= 3;

		delete[] arr;
		return temp_arr;
	}
	else {
		return arr;
	}
}