#include<stdio.h>
#include<stdlib.h>
#include "array_utilities.h"

int main(){
	int array[] = {1,4,2,4,3,4,5,4};
	int array2d[][3] = {{1,2,3},{4,5,4},{4,0,1}};
	int size = 8;
	int row = 3;
	int col = 3;
	int key = 4;
	int ans = find_index(array, key, size);
	printf("The index is %d\n", ans);

	int * ans_ptr = find_pointer(array, key, size);
	if (* ans_ptr == -1) {
		printf("Key %d not found.", key);
	}
	else {
		printf("Key %d found %d\n", key, * ans_ptr);
	}

	int count_num = count(array, key, size);
	printf("The count is %d\n", count_num);
	int count2d_num = count2d(row, col, array2d, key);
	printf("The total count is %d\n", count2d_num);
	return 0;
}
