#include <stdlib.h>
#include <time.h>
#include "../../HEADER/system/init.h"
#define yes 1
#define no 0
void shupple(int* table) {
	srand(time(NULL));
	int i;
	int v_temp, temp_1, temp_2;
	//shupple
	for (i = 0; i < 50; i++) {
		temp_1 = rand() % 7;
		temp_2 = rand() % 7;
		v_temp = *(table + temp_1);
		*(table + temp_1) = *(table + temp_2);
		*(table + temp_2) = v_temp;
	}
}
//this function is not tested
void interboard(int(*board)[12], int(*blockboard)[12]) {
	int col, row;
	for (col = 1; col < 11; col++)
		for (row = 0; row <24; row++) {
			board[row][col] = blockboard[row][col];
		}
	boardreset(blockboard, 24, 0);
}

int nosedive(int(*board)[12], int(*blockboard)[12]) {
	int impact = no;
	//working... pushboard()...
	interboard(board, blockboard);
	return 1;
}
void pushboard(int(*boards)[12]) {
	
}
