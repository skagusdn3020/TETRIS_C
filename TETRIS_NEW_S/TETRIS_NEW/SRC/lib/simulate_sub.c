#include <stdlib.h>
#include <time.h>
void shupple(int* table) {
	srand(time(NULL));
	int i;
	int v_temp, temp_1, temp_2;
	//¼¯±â
	for (i = 0; i < 50; i++) {
		temp_1 = rand() % 7;
		temp_2 = rand() % 7;
		v_temp = *(table + temp_1);
		*(table + temp_1) = *(table + temp_2);
		*(table + temp_2) = v_temp;
	}
}