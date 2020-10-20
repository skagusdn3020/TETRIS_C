#include <conio.h>
#include <Windows.h>
#include <process.h>
#include <stdio.h>
#include <time.h>
//every 0.1sec input from kb [thread]
unsigned int WINAPI kbin_th(int *key);
typedef enum _arrow {up=11,left,right,down} arrow;
void input(int* key) {
	HANDLE H_KEY;
	HANDLE ID_KEY;
	H_KEY = (HANDLE)_beginthreadex(NULL, 0, kbin_th,key, 0, (unsigned*)&ID_KEY);
}
 
unsigned int WINAPI kbin_th(int* key) {
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
						case 72: printf("ก่"); break;
						case 75: printf("ก็"); break;
						case 77: printf("กๆ"); break;
						case 80: printf("ก้"); break;
						default:
							break;
						}
					default:
						break;
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
