#include <conio.h>
#include <Windows.h>
#include <process.h>
#include <stdio.h>
#include <time.h>
#include "../../HEADER/system/structure.h"
//every 0.1sec input from kb [thread]
unsigned int WINAPI kbin_th(_Param* structure);
typedef enum _arrow {up=72,left=75,right=77,down=80} arrow;
void input(void* structure) {
	HANDLE H_KEY;
	HANDLE ID_KEY;
	H_KEY = (HANDLE)_beginthreadex(NULL, 0, kbin_th,(_Param*)structure, 0, (unsigned*)&ID_KEY);
}
 
unsigned int WINAPI kbin_th(_Param* structure) {
		int temp_key;
		time_t start, end;
		double dif = 0;
		while (1) {
			time(&start);
			while (1) {
				if (_kbhit()) {
					temp_key = _getch();
					switch (temp_key)
					{
					case 224:temp_key = _getch();
						switch (temp_key)
						{
						case 72: structure->key = up; break;
						case 75: structure->key = left; break;
						case 77: structure->key = right; break;
						case 80: structure->key = down; break;
						default:
							break;
						}
					default: structure->key = temp_key; break;
					}
				}
				time(&end);
				dif=difftime(end, start);
				if (dif < 0.1) {
					end = 0; dif = 0;
					break;
				}
			}
		}
		return 0;
}
