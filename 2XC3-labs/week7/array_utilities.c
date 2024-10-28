#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
int find_index(int array[], int key, int size) {
	for (int i = 0; i < size; i++) {
		if (array[i] == key) {
			return i;
		}

	}
	return -1;
}


int * find_pointer(int array[], int key, int size) {
	for (int *ptr = array; ptr < array + size; ptr++){
		if (*ptr == key) {
			return ptr;
		}
		
	}
	return NULL;
}

int count(int array[], int key, int size) {

	int * curr = array;
	int rem = size;
	int count = 0;
	while ((curr = find_pointer(curr, key, rem)) != NULL) {
		curr++;
		rem = size - (curr - array); 
		count = count + 1;
	}

	return count;
}

int count2d(int row, int col, int array[][col], int key) {

	int count_number = 0;
	for ( int i = 0; i < row; i++) {
		count_number += count(array[i], key, col);
	}
	return count_number;
}

