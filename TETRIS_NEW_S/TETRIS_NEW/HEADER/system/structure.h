#pragma once
#include <Windows.h>
typedef enum _arrow { up = 72, left = 75, right = 77, down = 80 } arrow;
//key,board,blockboard
typedef struct _Param {
	int key;
	int(*board)[12];
	int(*blockboard)[12];
}_Param;
//frtbuf,bckbuf,position{x,y}
typedef struct _Buffer {
	int(*frtbuf)[12];
	int(*bckbuf)[12];
	COORD position;
}_Buffer;
typedef struct _Arr_list {
	int(*board)[12];
	int(*blockboard)[12];
	int(*frtbuffer)[12];
	int(*bckbuffer)[12];
}_Arr_list; //all arr's pointer
