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
void interboard(int(*board)[12], int(*blockboard)[12]) {
	int col, row;
	for (col = 0; col < 10; col++)
		for (row = 24; row >= 0; row--) {
			//working...
		}
	boardreset(blockboard, 25, 0);
}

int nosedive(int(*board)[12], int(*blockboard)[12]) {
	int impact = no;
	//working...
	
	return 1;
}
void pushboard(int(*boards)[12]) {
	
}
