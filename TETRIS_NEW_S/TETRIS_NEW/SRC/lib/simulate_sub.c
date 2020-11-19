#include <stdlib.h>
#include <time.h>
#include "../../HEADER/system/init.h"
#include "../../HEADER/board_con.h"
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
void mergeboard(int(*board)[12], int(*blockboard)[12]) {
	int col, row;
	for (row = row_e; row >= row_s; row--) {
		for (col = col_s; col <= col_s; col++) {
			board[row][col] = blockboard[row][col];
		}
	}
	boardreset(blockboard, 24, 0);
}

int nosedive(int(*board)[12], int(*blockboard)[12]) {
	int impact = no;
	//working... pushboard()...
	mergeboard(board, blockboard);
	return 1;
}
void pushboard(int(*board)[12]) {
	int col, row;
	for (row = row_e; row > row_s; row--) {
		for (col = col_s; col <= col_s; col++) {
			board[row][col] = board[row - 1][col];
		}
	}
	//reset first line 0
	int temp;
	for (temp = col_s; temp <= col_e; temp++) {
		board[0][temp] = 0;
	}
}
int checkimpact(int(*board)[12], int(*blockboard)[12]) {

}
