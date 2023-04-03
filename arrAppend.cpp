#include "arrAppend.h"

int* append_to_dynamic_array(int* arr, int& logical_size, int& actual_size, int& apper) {
	if (actual_size == logical_size) {
		actual_size *= 2;
		logical_size += 1;
		int* temp_arr = new int[actual_size]();
		int cntr = 1;
		
		for (int i = 0; i < logical_size; i++) {
			if (cntr < logical_size) {
				temp_arr[i] = arr[i];
				cntr++;
			}
			else {
				temp_arr[i] = apper;
			}
		}

		delete[] arr;
		return temp_arr;
	}
	else {
		logical_size += 1;
		arr[logical_size - 1] = apper;
		return arr;
	}
}